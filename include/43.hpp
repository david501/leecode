#include "common.h"

class Solution {
public:
  string multiply(string num1, string num2) {
    const int n1 = num1.size();
    const int n2 = num2.size();
    vector<int> sum;
    for (int i = 0; i < n1; ++i) {
      const int a = num1[n1 - 1 - i] - '0';
      if (a == 0)
        continue;

      int carry = 0;
      for (int j = 0; j < n2; ++j) {
        const int mul = (num2[n2 - 1 - j] - '0') * a + carry;
        if (mul == 0)
          continue;

        while (i + j > (int)sum.size() - 1)
          sum.push_back(0);
        const int m = sum[i + j] + mul;
        sum[i + j] = m % 10;
        carry = m / 10;
      }
      if (carry) {
        sum.push_back(carry);
      }
    }
    if (sum.size() == 0)
      return "0";

    string res;
    for (auto it = sum.rbegin(); it != sum.rend(); ++it)
      res += to_string(*it);
    return res;
  }
};