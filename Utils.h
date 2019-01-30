/**
 * A buncha utility functions to make main easier to read
 * wdmzszh
 */

#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>

#include <iostream>
#include <fstream>
#include <string>

#include <unistd.h>

#include <HexInt.h>

// ***** Parsing logic
int parseLine(std::string line, std::string* l_str, int* op, std::string* r_str);
#define PLUS 0
#define MINUS 1
#define MULT 2
#define DIV 3

// ***** Converting ascii to hex 
uint8_t asciiTable(char aCh);


#endif