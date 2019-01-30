

#include <Utils.h>

using namespace std;

// ***** Converting ascii to hex 
uint8_t asciiTable(char aCh) {
    // If its numerical
    if (48 <= aCh && aCh <= 57) {
        return (aCh & 0x0F);
    }

    // If its a letter (upper or lowercase)
    if ((65 <= aCh && aCh <= 70) || (97 <= aCh && aCh <= 102)) {
        return (aCh & 0x0F) + 9;
    }

    // WARNING: DEFAULT CASE RETURNS ZERO
    return 0x00;
}

// Parse an input string and set the relevant properties
int parseLine(std::string line, std::string* l_str, int* op, std::string* r_str) {
    // Stateful variables:
    bool firstHalf = true; // Control if we're reading the first or second half of the line
    // string leftArg;
    // string rightArg;

    // Go thru each character of the input string
    for (int i = 0; i < line.length(); i++) {
        char c = line[i];
        printf("Character is %c\n", c);

    
        if (c == '+') {
            *op = PLUS; firstHalf = false;
        } else if (c == '-') {
            *op = MINUS; firstHalf = false;
        } else if (c == '*') {
            *op = MULT; firstHalf = false;
        } else if (c == '/') {
            *op = DIV; firstHalf = false;
        } else {

            // Is a hex character, handle appropriately 
            if (firstHalf) { // Append to first half
                (*l_str) += c;
            } else { // append to second half
                (*r_str) += c;
            }
        }
    }

    // Set the right properties in the provided HexInt arguments:

    cout << "Ending lstr: " << *l_str << endl;
    cout << "Ending rstr: " << *r_str << endl;

    return 0;
}

