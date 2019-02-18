#include "common.h"

class Solution {
public:
  string fractionToDecimal(int numerator, int denominator) {
    long den{denominator}, num{numerator};
    bool sign = true;
    if (den < 0) {
      den = -den;
      sign = !sign;
    }
    if (num < 0) {
      num = -num;
      sign = !sign;
    }

    string res = (sign ? "" : "-") + to_string(num / den);
    long n = num % den;
    if (!n)
      return res == "-0" ? "0" : res;

    map<int, int> dict;
    int index = 0;
    string dec;
    while (n) {
      if (dict.count(n))
        break;
      dict[n] = index++;
      n *= 10;
      dec += to_string(n / den);
      n %= den;
    }

    res += ".";
    if (n == 0) {
      res += dec;
    } else {
      res += dec.substr(0, dict[n]);
      res += "(" + dec.substr(dict[n], dec.size() - dict[n]) + ")";
    }

    return res;
  }
};