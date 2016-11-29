# -*- mode:cmake -*-

project(SQLPARSER)

cmake_minimum_required (VERSION 2.8)

# Detect build type, fallback to release and throw a warning if use didn't specify any
if(NOT CMAKE_BUILD_TYPE)
  message(WARNING "Build type not set, falling back to Release mode.
 To specify build type use:
 -DCMAKE_BUILD_TYPE=<mode> where <mode> is Debug or Release.")
  set(CMAKE_BUILD_TYPE "Release" CACHE STRING
       "Choose the type of build, options are: Debug Release."
       FORCE)
endif(NOT CMAKE_BUILD_TYPE)

option(WITH_LIBCXX "Building with clang++ and libc++(in Linux). To enable with: -DWITH_LIBCXX=On" On)

if(CMAKE_VERSION VERSION_EQUAL "3.0.0" OR
   CMAKE_VERSION VERSION_GREATER "3.0.0")
  CMAKE_POLICY(SET CMP0026 OLD)
  CMAKE_POLICY(SET CMP0045 OLD)
  CMAKE_POLICY(SET CMP0042 OLD)
  CMAKE_POLICY(SET CMP0059 OLD)
endif()

set(MY_CXX_WARNING_FLAGS "  -Wall -pedantic -W")

# Initialize CXXFLAGS.
if("${CMAKE_VERSION}" VERSION_GREATER 3.1.0)
  set(CMAKE_CXX_STANDARD 11)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
else()
  set(CMAKE_CXX_FLAGS                "${CMAKE_CXX_FLAGS} -std=c++11")
  set(CMAKE_CXX_FLAGS_DEBUG          "${CMAKE_CXX_FLAGS_DEBUG} -std=c++11")
  set(CMAKE_CXX_FLAGS_MINSIZEREL     "${CMAKE_CXX_FLAGS_MINSIZEREL} -std=c++11")
  set(CMAKE_CXX_FLAGS_RELEASE        "${CMAKE_CXX_FLAGS_RELEASE} -std=c++11")
  set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} -std=c++11")
endif()

set(CMAKE_CXX_FLAGS                "${CMAKE_CXX_FLAGS} -Wall ${MY_CXX_WARNING_FLAGS}")
set(CMAKE_CXX_FLAGS_DEBUG          "${CMAKE_CXX_FLAGS_DEBUG} -O0 -g ${MY_CXX_WARNING_FLAGS}")
set(CMAKE_CXX_FLAGS_MINSIZEREL     "${CMAKE_CXX_FLAGS_MINSIZEREL} -Os -DNDEBUG ${MY_CXX_WARNING_FLAGS}")
set(CMAKE_CXX_FLAGS_RELEASE        "${CMAKE_CXX_FLAGS_RELEASE} -O3 -DNDEBUG ${MY_CXX_WARNING_FLGAS}")
set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} -O2 -g ${MY_CXX_WARNING_FLAGS}")

# Compiler-specific C++11 activation.
if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "GNU")
    execute_process(
        COMMAND ${CMAKE_CXX_COMPILER} -dumpversion OUTPUT_VARIABLE GCC_VERSION)
    # Just g++-5.0 and greater contain <codecvt> header. (test in ubuntu)
    if (NOT (GCC_VERSION VERSION_GREATER 5.0 OR GCC_VERSION VERSION_EQUAL 5.0))
        message(FATAL_ERROR "${PROJECT_NAME} requires g++ 5.0 or greater.")
    endif ()
elseif ("${CMAKE_CXX_COMPILER_ID}" MATCHES "Clang" AND APPLE)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")
elseif ("${CMAKE_CXX_COMPILER_ID}" MATCHES "Clang" AND CMAKE_SYSTEM_NAME MATCHES "Linux")
    execute_process(
        COMMAND ${CMAKE_CXX_COMPILER} -dumpversion OUTPUT_VARIABLE CLANG_VERSION)
    if (NOT (CLANG_VERSION VERSION_GREATER 4.2.1 OR CLANG_VERSION VERSION_EQUAL 4.2.1))
        message(FATAL_ERROR "${PROJECT_NAME} requires clang 4.2.1 or greater.")
    endif ()
    # You can use libc++ to compile this project when g++ is NOT greater than or equal to 5.0.
    if (WITH_LIBCXX)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++")
    endif()
else ()
    message(FATAL_ERROR "Your C++ compiler does not support C++11.")
endif ()


set(grammar-SOURCE_DIR
	${PROJECT_SOURCE_DIR}/grammar
	)

set(antlr4-BASE_DIR
  ${PROJECT_SOURCE_DIR}/../antlr4-runtime
  )
  
set(antlr4-SOURCE_DIR
  ${antlr4-BASE_DIR}/runtime/src
  )

set(myparser-GRAMMARS
  MyGrammar
  )

find_package(Java COMPONENTS Runtime REQUIRED)

if (NOT ANTLR_JAR_LOCATION)
  message(WARNING "Missing antlr4.jar location. You can specify its path using: -DANTLR_JAR_LOCATION=<path>. Attempting to use the java classpath.")
  set(ANTLR_TOOL org.antlr.v4.Tool)
else()
  get_filename_component(ANTLR_NAME ${ANTLR_JAR_LOCATION} NAME_WE)
  if(NOT EXISTS "${ANTLR_JAR_LOCATION}")
    message(FATAL_ERROR "Unable to find ${ANTLR_NAME} in ${ANTLR_JAR_LOCATION}")
  else()
    message(STATUS "Found ${ANTLR_NAME}: ${ANTLR_JAR_LOCATION}")
    set(ANTLR_TOOL -jar ${ANTLR_JAR_LOCATION})
  endif()
endif()

set(myparser-GENERATED_DIR ${PROJECT_SOURCE_DIR}/generated)
set(myparser-GENERATED_SRC
 )
foreach(lang ${myparser-GRAMMARS})
  set(output
    ${myparser-GENERATED_DIR}/${lang}Lexer.cpp
    ${myparser-GENERATED_DIR}/${lang}Parser.cpp
    ${myparser-GENERATED_DIR}/${lang}BaseListener.cpp
    ${myparser-GENERATED_DIR}/${lang}BaseVisitor.cpp
    ${myparser-GENERATED_DIR}/${lang}Listener.cpp
    ${myparser-GENERATED_DIR}/${lang}Visitor.cpp
    )

  list(APPEND myparser_GENERATED_SRC ${output})


  add_custom_command(
    OUTPUT
    ${output}
    COMMAND ${CMAKE_COMMAND} -E make_directory ${myparser-GENERATED_DIR}
    COMMAND "${Java_JAVA_EXECUTABLE}"
      ${ANTLR_TOOL}
      -Werror
      -Dlanguage=Cpp
      -listener -visitor
      -o ${myparser-GENERATED_DIR} -package myparser
      ${grammar-SOURCE_DIR}/${lang}.g4
    WORKING_DIRECTORY "${PROJECT_SOURCE_DIR}"
    DEPENDS ${grammar-SOURCE_DIR}/${lang}.g4
    )
endforeach(lang ${myparser-GRAMMARS})


foreach( src_file ${myparser-GENERATED_SRC} )
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          GENERATED TRUE
          )
endforeach( src_file ${myparser-GENERATED_SRC} )

include_directories(
  ${antlr4-SOURCE_DIR}
  ${antlr4-SOURCE_DIR}/misc
  ${antlr4-SOURCE_DIR}/atn
  ${antlr4-SOURCE_DIR}/dfa
  ${antlr4-SOURCE_DIR}/tree
  ${antlr4-SOURCE_DIR}/support
  ${myparser-GENERATED_DIR}
  ${PROJECT_SOURCE_DIR}/src
  )

file(GLOB myparser_SRC RELATIVE ${PROJECT_SOURCE_DIR} src/*.cpp)
list(APPEND myparser_SRC ${myparser_GENERATED_SRC})

foreach( src_file ${myparser_SRC} )
      set_source_files_properties(
          ${src_file}
          PROPERTIES
          COMPILE_FLAGS -Wno-overloaded-virtual
          )
endforeach( src_file ${myparser_SRC} )

add_library(myparser STATIC ${myparser_SRC})

option(BUILD_BINARY "Build CLI runner" False)

if(BUILD_BINARY)
    add_custom_target(BuildRuntime
        COMMAND ${CMAKE_COMMAND} -E make_directory ${antlr4-BASE_DIR}/build
        COMMAND ${CMAKE_COMMAND} -E chdir build ${CMAKE_COMMAND} ..
        COMMAND ${CMAKE_COMMAND} -E chdir build ${CMAKE_COMMAND} --build .
        WORKING_DIRECTORY ${antlr4-BASE_DIR}
    )
    
    add_executable(run_parser
        ${PROJECT_SOURCE_DIR}/src/bin/main.cpp
    )
    
    foreach( target run_parser )
        add_dependencies(${target} BuildRuntime)
        target_link_libraries(${target} myparser)
        target_link_libraries(${target} ${antlr4-BASE_DIR}/dist/libantlr4-runtime.a)
    endforeach( target run_parser )
    
    find_package(Threads)
    target_link_libraries(run_parser ${CMAKE_THREAD_LIBS_INIT})
endif()

#add_precompiled_header(myparser ${PROJECT_SOURCE_DIR}/runtime/src/antlrcpp-Prefix.h)

install(TARGETS myparser
        ARCHIVE DESTINATION lib)

# get_cmake_property(_variableNames VARIABLES)
# foreach (_variableName ${_variableNames})
#     message(STATUS "${_variableName}=${${_variableName}}")
# endforeach()
