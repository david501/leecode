class Solution {
public:
  // vector<string> generateParenthesis(int n) {
  //   if (n == 0)
  //     return {};

  //   vector<string> res;
  //   function<void(string, int, int)> helper = [&](string left, int right,
  //                                                 int n) {
  //     if (n == 0) {
  //       res.push_back(left + string(right, ')'));
  //       return;
  //     }
  //     for (int i = 0; i <= right; ++i) {
  //       helper(left + ((i) ? string(i, ')') : "") + "(", right + 1 - i, n -
  //       1);
  //     }
  //   };

  //   helper("(", 1, n - 1);
  //   return res;
  // }

  vector<string> generateParenthesis(int n) {
    vector<string> res;
    function<void(string, int, int)> helper = [&](string str, int left,
                                                  int right) {
      if (str.size() == n + n) {
        res.push_back(str);
        return;
      }
      if (left < n)
        helper(str + "(", left + 1, right);
      if (right < left)
        helper(str + ")", left, right + 1);
    };

    helper("", 0, 0);
    return res;
  }
};