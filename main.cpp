

#include <stdio.h>
#include <stdlib.h>

#include <iostream>
#include <fstream>
#include <string>

#include <HexInt.h>
#include <Utils.h>

using namespace std; // Depends on how you feel about namespaces

int main(int argc, char** argv) {
    if (argc != 3) {
        printf("Invalid arguments! Specify both input and output files\n");
        return -1; // Exit
    }

    // FILE* inputFile = fopen(argv[1], "r");
    // FILE* outputFile = fopen(argv[2], "w");
    ifstream inputFile(argv[1], ifstream::in);
    ofstream outputFile(argv[2], ofstream::out);

    string line;
    getline(inputFile, line);
    
    while (line != "") {
        // Process line here
        string l_str;
        string r_str;
        int op = -1;
        parseLine(line, &l_str, &op, &r_str);

        HexInt lhs(l_str.c_str());
        HexInt rhs(r_str.c_str());
        printf("Retrieved lhs = %x and rhs = %x\n", lhs.hexInt, rhs.hexInt); 

        // Reset and fetch another line
        line = "";
        getline(inputFile, line);
    }


    // fclose(inputFile);
    // fclose(outputFile);
    inputFile.close();
    outputFile.close();
    return 0;
}