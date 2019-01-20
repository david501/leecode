class Solution {
public:
  int repeatedStringMatch(string A, string B) {
    string s = A;
    while (s.size() < B.size())
      s += A;

    for (int i = 0; i < 2; ++i, s += A)
      if (s.find(B) != string::npos)
        return s.size() / A.size();
    return -1;
  }
};