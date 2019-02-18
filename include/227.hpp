#include "common.h"

class Solution {
public:
  int calculate(string s) {
    const int n = s.size();
    int index = 0;
    function<int()> getNumber = [&]() -> int {
      while (index < n && s[index] == ' ')
        ++index;

      int num = 0;
      while (index < n && s[index] >= '0' && s[index] <= '9') {
        num = num * 10 + (s[index++] - '0');
      }

      return num;
    };

    function<char()> getOp = [&]() -> char {
      while (index < n && s[index] == ' ')
        ++index;
      return (index < n) ? s[index++] : 0;
    };

    int v1, v2;
    char op_last = 0;
    stack<char> ops;
    auto eval = [&]() {
      switch (op_last) {
      case '+':
        v1 += v2;
        break;
      case '-':
        v1 -= v2;
        break;
      }
      op_last = 0;
    };

    v1 = getNumber();
    while (true) {
      auto op = getOp();
      switch (op) {
      case '+':
      case '-':
        eval();
        op_last = op;
        v2 = getNumber();
        break;
      case '*':
        if (op_last)
          v2 *= getNumber();
        else
          v1 *= getNumber();
        break;
      case '/':
        if (op_last)
          v2 /= getNumber();
        else
          v1 /= getNumber();
        break;
      case 0:
        eval();
        return v1;
      }
    }
  }
};