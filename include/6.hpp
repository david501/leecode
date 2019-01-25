#include "common.h"

class Solution {
public:
  string convert(string s, int numRows) {
    if (numRows == 1)
      return s;

    string ss[numRows];
    for (int i = 0, row = 0, step = 1; i < s.size(); ++i) {
      ss[row] += s[i];

      if (row == 0)
        step = 1;
      else if (row == numRows - 1)
        step = -1;
      row += step;
    }

    string res;
    for (int i = 0; i < numRows; ++i)
      res += ss[i];
    return res;
  }
};