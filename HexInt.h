
#ifndef HEXINT_H
#define HEXINT_H


class HexInt {
public:
    HexInt(const char* str); // Constructor
    ~HexInt(); // Destructor

    char* toString(); // Allocate and return copy (20-digit)
    char* toTrimmedString(); // Allocate and return w/o leading zeroes

    static HexInt* add(HexInt* lhs, HexInt* rhs); // Arithmetic
    int hexInt; // Internal representation of the value
private:
    char* trimmedString;
    char* untrimmedString;
};

#endif