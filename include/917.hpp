class Solution {
public:
  string reverseOnlyLetters(string S) {
    int l{0}, r{S.size() - 1};
    while (l < r) {
      if (!isalpha(S[l])) {
        ++l;
        continue;
      }
      if (!isalpha(S[r])) {
        --r;
        continue;
      }
      swap(S[l++], S[r--]);
    }
    return S;
  }
};