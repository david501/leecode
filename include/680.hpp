class Solution {
public:
  bool validPalindrome(string s) {
    int left = 0;
    int right = s.size() - 1;

    auto check = [&](int left, int right) -> bool {
      while (left < right)
        if (s[left++] != s[right--])
          return false;
      return true;
    };

    while (left < right) {
      if (s[left] != s[right]) {
        return check(left, right - 1) || check(left + 1, right);
      }
      ++left;
      --right;
    }
    return true;
  }
};