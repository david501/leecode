#include "common.h"

class Solution {
public:
  int evalRPN(vector<string> &tokens) {
    stack<int> nums;
    int a, b;
    auto pop = [&]() {
      b = nums.top();
      nums.pop();
      a = nums.top();
      nums.pop();
    };

    for (const auto &token : tokens) {
      if (token == "+") {
        pop();
        nums.push(a + b);
      } else if (token == "-") {
        pop();
        nums.push(a - b);
      } else if (token == "*") {
        pop();
        nums.push(a * b);
      } else if (token == "/") {
        pop();
        nums.push(a / b);
      } else {
        nums.push(atoi(token.c_str()));
      }
    }
    return nums.top();
  }
};