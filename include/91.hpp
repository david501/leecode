class Solution {
public:
  int numDecodings(string s) {
    int one{1}, two{0};
    int last {0};
    for (char c : s) {
      const int d = c - '0';
      const int new_one = (d >= 1 && d <= 9) ? one + two : 0;
      const int d2 = last + d;
      two = (d2 > 9 && d2 <= 26) ? one : 0;
      one = new_one;
      last = d * 10;
    }

    return one + two;
  }
};