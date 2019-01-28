#include "common.h"
class Solution {
public:
  double myPow(double x, int n) {
    if (n == 0)
      return 1.0;
    
    long y = n;
    if (y < 0) {
      x = 1.0 / x;
      y = -y;
    }

    double r = 1.0;
    while (y) {
      if (y & 1)
        r *= x;
      y >>= 1;
      x *= x;
    }

    return r;
  }
};