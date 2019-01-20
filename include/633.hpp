class Solution {
public:
  bool judgeSquareSum(int c) {
    for (int i = 0; i <= sqrt(c / 2); ++i) {
      const int r = c - i * i;
      const int rs = sqrt(r) + 0.5;
      if (rs * rs == r)
        return true;
    }
    return false;
  }
};