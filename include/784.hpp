class Solution {
public:
  vector<string> letterCasePermutation(string S) {
    vector<string> res;
    int i = 0;
    for (; i < S.size(); ++i) {
      if (S[i] < '0' || S[i] > '9')
        break;
    }
    if (i == S.size())
      return {S};

    string lower = S.substr(0, i + 1);
    string upper = lower;
    lower[i] = tolower(S[i]);
    upper[i] = toupper(S[i]);

    auto next = letterCasePermutation(S.substr(i + 1, S.size() - 1 - i));
    for (auto ns : next) {
      res.push_back(lower + ns);
      res.push_back(upper + ns);
    }

    return res;
  }
};