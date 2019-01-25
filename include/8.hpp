#include "common.h"

class Solution {
public:
  int myAtoi(string str) {
    bool sign = true;
    int i = 0;
    while (isspace(str[i]))
      ++i;

    if (str[i] == '+')
      ++i;
    else if (str[i] == '-') {
      sign = false;
      ++i;
    }

    int64_t n = 0;
    while (i < str.size()) {
      const char c = str[i++];
      if (!isdigit(c))
        break;

      n = n * 10 + c - '0';
      if (n > INT_MAX)
        return sign ? INT_MAX : INT_MIN;
    }

    return sign ? n : -n;
  }
};