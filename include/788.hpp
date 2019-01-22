class Solution {
public:
  int rotatedDigits(int N) {
    auto isValid = [](int n)->bool {
      bool good = false;
      while (n) {
        const int d = n % 10;
        if (d == 3 || d == 4 || d == 7)
          return false;
        if (d == 2 || d == 5 || d == 6 || d == 9)
          good = true;
        n /= 10;
      }
      return good;
    };

    int count = 0;
    for (int i = 1; i < N; ++i) {
      if (isValid(i))
        ++count;
    }
    return count;
  }
};