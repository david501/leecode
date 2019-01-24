class Solution {
public:
  vector<int> diStringMatch(string S) {
    const int n{S.size()};
    vector<int> vec(n + 1);
    int I{0}, D{n};
    for (int i = 0; i < n; ++i) {
      vec[i] = (S[i] == 'I') ? I++ : D--;
    }
    vec[n] = I;
    return vec;
  }
};