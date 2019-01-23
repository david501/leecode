class Solution {
public:
  vector<string> uncommonFromSentences(string A, string B) {
    map<string, int> counts;
    auto scan = [&](string s) {
      istringstream in(s);
      for (string word; in >> word;)
        ++counts[word];
    };

    scan(A);
    scan(B);

    vector<string> res;
    for (auto &it : counts) {
      if (it.second == 1)
        res.push_back(it.first);
    }
    return res;
  }
};