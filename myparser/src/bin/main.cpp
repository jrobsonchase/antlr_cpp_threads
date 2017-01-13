#include "antlr4-runtime.h"
#include "LuaBaseListener.h"
#include "LuaLexer.h"
#include "LuaParser.h"

#include <thread>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <mutex>

using namespace std;

using namespace myparser;
using namespace antlr4;
using namespace antlr4::tree;

mutex PARSE_MUTEX;

uint8_t run_parser(const char * input) {
  try {
    ANTLRInputStream stream(input);
    LuaLexer lexer(&stream);
    CommonTokenStream tokens(&lexer);
    LuaParser parser(&tokens);

    parser.setErrorHandler(std::make_shared<BailErrorStrategy>());

    ParseTree * tree = parser.chunk();
    ParseTreeWalker walker;
    LuaBaseListener listener;
    walker.walk(&listener, tree);
  } catch (std::exception& e) {
    return 0;
  }

  return 1;
}

void thread_main(const char * fileName) {
    ifstream inputFile(fileName);
    stringstream buf;
    buf << inputFile.rdbuf();
    string inputString = buf.str();

    for(int i = 0; i < 50; ++i) {
        // uncommenting this will fix the problem
        // lock_guard<mutex> lck(PARSE_MUTEX);
        run_parser(inputString.c_str());
    }
}

int main(int argc, char** argv) {
    if (argc < 2) {
        cout << "Need input file. Provide a path to LuaInput.lua." << endl;
        return -1;
    }

    ifstream inputFile(argv[1]);
    stringstream buf;
    buf << inputFile.rdbuf();
    string inputString = buf.str();

    // Running this first will also make the problem go away,
    // but only for the same input.
    // run_parser(inputString.c_str());

    thread one(thread_main, argv[1]);
    thread two(thread_main, argv[1]);
    thread three(thread_main, argv[1]);
    thread four(thread_main, argv[1]);

    one.join();
    two.join();
    three.join();
    four.join();
}
