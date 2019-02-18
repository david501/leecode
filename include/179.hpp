#include "common.h"

class Solution {
public:
  string largestNumber(vector<int> &nums) {
    function<bool(const string &, const string &)> comp =
        [](const string &a, const string &b) -> bool {
      const int na = a.size();
      const int nb = b.size();
      for (int i = 0; i < na + nb; ++i) {
        const char c1 = (i < na) ? a[i] : b[i - na];
        const char c2 = (i < nb) ? b[i] : a[i - nb];
        if (c1 > c2)
          return true;
        if (c1 < c2)
          return false;
      }
      return true;
    };

    set<string, decltype(comp)> sn(comp);

    bool flag = false;
    for (int i : nums) {
      if (i)
        flag = true;
      sn.insert(to_string(i));
    }
    
    if (!flag)
      return "0";

    string s;
    for (const string &str : sn) {
      s += str;
    }

    return s;
  }
};