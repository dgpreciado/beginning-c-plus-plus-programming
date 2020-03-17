//
// Created by Gabe on 3/16/2020.
//iostream - provides definitions for formatted input and output from/to streams
// fstream - provides definstions for formatted input and output from/to file streams
// iomanip - provides definitions for manipulators used to format stream i/o
//
// commonly used stream classes
// ios - provides basic support for formatted and unformatted I/O operations. Base Class most other classes
// ifstream - provides for high-level input operations on file based streams
// ofstream - provide for high-level output operations on file based streams
// fstream - provides for high-level I/O operations on file based streams Derived from "ofstream" and "ifstream"
// stringstream  - provides for high-level I/O operations on memory based strings Derived from "istringstream" and "ostringstream"
//
//  GLOBAL STREAM OBJECTS
// cin - Standard input stream - by default 'connected' to the standard error device (console) Instance of "ostream" (unbuffered)
// cout - Standard output stream - be default 'connected' to the standard output device (console) instance of "ostream" (unbuffered)
// cerr - Standard error stream - by default 'connected' to the standard error device (console) Instance of "ostream" (unbuffered)
// clog -  Standard log stream - by default 'connected' to the standard log device (console) Instance of "ostream" (unbuffered)
//
// Global objects initialized before main executes, Best practice is to use 'cerr' for error messages and 'clog' for log messages
//
// Common stream manipulators
// Boolean: boolalpha, noboolalpha
// Integer: dec, hex, oct, showbase, noshowbase, showpos, noshowpos, uppercase, nouppercase
// Float point: fixed, scientific, setprecision, showpoint, noshowpoint, showpos, noshowpos
// Field width, justification and fill: setw, left, right, internal, setfill
// Others: end;, flush, skipws, noskipws, ws.

#include <iomanip>
#include "iostream"



int main_sec19_1(){

    std::cout << (10 == 10) << " should = 1" << std::endl;
    std::cout << (10 == 20) << " should = 0" << std::endl;

    std::cout << std::boolalpha;
    std::cout << (10 == 10) << " should = true" << std::endl;
    std::cout << (10 == 20) << " should = false" << std::endl;

    std::cout << std::noboolalpha;
    std::cout << (10 == 10) << " should = 1" << std::endl;
    std::cout << (10 == 20) << " should = 0" << std::endl;

    std::cout << std::boolalpha;
    //std::cout << std::resetiosflags(std::ios::boolalpha);
    std::cout << " should reset to default method version 1 " << std::endl;
    std::cout << (10 == 10) << " should = true" << std::endl;
    std::cout << (10 == 20) << " should = false" << std::endl;

    //std::cout << std::boolalpha;
    std::cout << std::resetiosflags(std::ios::boolalpha);
    std::cout << " should reset to default method version 2 " << std::endl;
    std::cout << (10 == 10) << " should = 1" << std::endl;
    std::cout << (10 == 20) << " should = 0" << std::endl;

    std::cout << std::resetiosflags(std::ios::boolalpha);
    std::cout << (10 == 10) << " should = 1" << std::endl;
    std::cout << (10 == 20) << " should = 0" << std::endl;

    return 0;
}