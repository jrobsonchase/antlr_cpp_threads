#include "extern.h"
#include <thread>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <mutex>

using namespace std;

mutex PARSE_MUTEX;

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
        cout << "Need input file. Provide a path to MyGrammar.g4." << endl;
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
