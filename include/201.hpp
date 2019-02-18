class Solution {
public:
  int rangeBitwiseAnd(int m, int n) {
    if (m == 0)
      return 0;

    int k = 0;
    while (m != n) {
      ++k;
      m >>= 1;
      n >>= 1;
    }
    return m << k;
  }
};