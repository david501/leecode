#include "common.h"
class Solution {
public:
  int divide(int dividend, int divisor) {
    long dvd{dividend}, dvs{divisor};
    bool sign = (dvd >= 0) ^ (dvs >= 0);
    if (dvd < 0)
      dvd = -dvd;
    if (dvs < 0)
      dvs = -dvs;

    long quotient = 0;
    long q = 1, d2 = dvs;
    while (dvd > d2) {
      d2 = d2 << 1;
      q = q << 1;
    }

    while (dvd >= dvs) {
      if (d2 <= dvd) {
        dvd -= d2;
        quotient += q;
      }
      d2 = d2 >> 1;
      q = q >> 1;
    }

    quotient = (sign) ? -quotient : quotient;
    if (quotient > INT_MAX)
      quotient = INT_MAX;
    return quotient;
  }
};