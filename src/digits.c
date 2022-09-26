#include "digits.h"
// * Handles all ASCII character digits as well as digit retrieval

// ===== Constants =============================================================

const char *DIGIT0[5] = {" _ ", "| |", "|_|", "   ", "   "};
const char *DIGIT1[5] = {"   ", "  |", "  |", "   ", "   "};
const char *DIGIT2[5] = {" _ ", " _|", "|_ ", "   ", "   "};
const char *DIGIT3[5] = {" _ ", " _|", " _|", "   ", "   "};
const char *DIGIT4[5] = {"   ", "|_|", "  |", "   ", "   "};
const char *DIGIT5[5] = {" _ ", "|_ ", " _|", "   ", "   "};
const char *DIGIT6[5] = {" _ ", "|_ ", "|_|", "   ", "   "};
const char *DIGIT7[5] = {" _ ", "  |", "  |", "   ", "   "};
const char *DIGIT8[5] = {" _ ", "|_|", "|_|", "   ", "   "};
const char *DIGIT9[5] = {" _ ", "|_|", " _|", "   ", "   "};
const char *DIGIT_COLON[5] = {"   ", " o ", " o ", "   ", "   "};

// ===== Functions =============================================================

// Convert a character into an integer for paging digit library
int digits_get_digit_index(char digit) {
    // Switch based on the character
    switch (digit) {
        case '0':
            return 0;
        case '1':
            return 1;
        case '2':
            return 2;
        case '3':
            return 3;
        case '4':
            return 4;
        case '5':
            return 5;
        case '6':
            return 6;
        case '7':
            return 7;
        case '8':
            return 8;
        case '9':
            return 9;
        case ':':
            return 10;
        default:
            // This should not happen; Raise an exception
            printf("(DIGITS) Invalid character entry: %c", digit);
            exit(1);
    }
}

// Given an integer and a row access value, return the corresponding splice
const char *digit_get_splice(uint32_t value, uint32_t rowAccess) {
    switch (value) {
        case 0:
            return DIGIT0[rowAccess];
        case 1:
            return DIGIT1[rowAccess];
        case 2:
            return DIGIT2[rowAccess];
        case 3:
            return DIGIT3[rowAccess];
        case 4:
            return DIGIT4[rowAccess];
        case 5:
            return DIGIT5[rowAccess];
        case 6:
            return DIGIT6[rowAccess];
        case 7:
            return DIGIT7[rowAccess];
        case 8:
            return DIGIT8[rowAccess];
        case 9:
            return DIGIT9[rowAccess];
        case 10:
            return DIGIT_COLON[rowAccess];
        default:
            // This should not happen; Raise an exception
            printf("(DIGITS) Incorrect splice value switch: %d", value);
            exit(1);
    }
}