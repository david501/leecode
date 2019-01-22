class Solution {
public:
  bool buddyStrings(string A, string B) {
    const int na = A.size();
    const int nb = B.size();
    if (na < 2 || nb < 2 || na != nb)
      return false;

    set<char> char_set;
    bool same_char = false;
    int diff_count = 0;
    char a, b;
    for (int i = 0; i < na; ++i) {
      if (A[i] != B[i]) {
        if (diff_count == 0) {
          a = A[i];
          b = B[i];
        } else {
          if (A[i] != b || B[i] != a)
            return false;
        }
        ++diff_count;
      }

      if (char_set.count(A[i]))
        same_char = true;
      else
        char_set.insert(A[i]);
    }

    return diff_count == 2 || (diff_count == 0 && same_char);
  }
};