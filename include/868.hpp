class Solution {
public:
  int binaryGap(int N) {
    int gap = 0;
    bool first_one = true;
    int count = 0;
    while (N) {
      if (N & 1) {
        if (first_one) {
          first_one = false;
        } else {
          gap = max(gap, count);
        }
        count = 1;
      } else {
        ++count;
      }
      N = N >> 1;
    }
    return gap;
  }
};