class Solution {
public:
  vector<vector<string>> partition_0(string s) {
    const int n = s.size();
    vector<vector<string>> res;
    vector<string> path;

    function<bool(int, int)> isPalindrome = [&](int l, int r) -> bool {
      while (l < r) {
        if (s[l++] != s[r--])
          return false;
      }
      return true;
    };

    function<void(int)> dfs = [&](int index) {
      if (index == n) {
        res.push_back(path);
        return;
      }
      for (int i = index; i < n; ++i) {
        if (isPalindrome(index, i)) {
          path.push_back(s.substr(index, i - index + 1));
          dfs(i + 1);
          path.pop_back();
        }
      }
    };

    dfs(0);

    return res;
  }
};