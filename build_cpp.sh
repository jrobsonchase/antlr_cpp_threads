#!/bin/bash

set -e

mkdir -p runtime-build && cd runtime-build

CXXFLAGS='-fPIC' cmake -DCMAKE_INSTALL_PREFIX:PATH=`pwd`/../cpp-static --config Release ../antlr4-runtime 
make && make install

cd ..

mkdir -p parser-build && cd parser-build

CXXFLAGS='-fPIC' cmake -DBUILD_BINARY=true -DCMAKE_INSTALL_PREFIX:PATH=`pwd`/../cpp-static --config Release ../myparser
make && make install
