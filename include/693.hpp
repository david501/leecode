class Solution {
public:
  bool hasAlternatingBits(int n) {
    const int m = n ^ (n >> 1);
    return !(m & (m + 1));
  }
};