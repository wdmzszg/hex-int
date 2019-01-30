

#include <stdio.h>
#include <stdlib.h>

#include <iostream>
#include <fstream>
#include <string>

#include <HexInt.h>
#include <Utils.h>

HexInt::HexInt(const char* str) {
    trimmedString = (char*)malloc(strlen(str) + 1); // Allocate space for '\0'
    memcpy(trimmedString, str, strlen(str));

    printf("Creating hexint with value 0x%s\n", str);
    hexInt = 0;

    // Set first bit 
    hexInt |= asciiTable(str[0]);

    // Iteratively set the other bits
    for (int i = 1; i < strlen(str); i++) {
        // Make more room via bitshift
        hexInt = hexInt << 4;

        // Extract value from character
        char c = str[i];
        uint8_t b = asciiTable(c);

        // Set bits 
        hexInt |= b;
    }
    
}

HexInt::~HexInt() {
    // Clean memory 
    free(trimmedString);
}

char* HexInt::toString() {
    // Use toTrimmedString(), but with padding 
}

char* HexInt::toTrimmedString() {
    return trimmedString;
}

HexInt* HexInt::add(HexInt* lhs, HexInt* rhs) {
    
}

