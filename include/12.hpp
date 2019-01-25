#include "common.h"

class Solution {
public:
  string intToRoman(int num) {
    static const string M[] = {"", "M", "MM", "MMM"};
    static const string C[] = {"",  "C",  "CC",  "CCC",  "CD",
                               "D", "DC", "DCC", "DCCC", "CM"};
    static const string X[] = {"",  "X",  "XX",  "XXX",  "XL",
                               "L", "LX", "LXX", "LXXX", "XC"};
    static const string I[] = {"",  "I",  "II",  "III",  "IV",
                               "V", "VI", "VII", "VIII", "IX"};

    return M[num / 1000] + C[(num % 1000) / 100] + X[(num % 100) / 10] +
           I[num % 10];
  }
};