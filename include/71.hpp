#include "common.h"

class Solution {
public:
  string simplifyPath(string path) {
    stack<string> st;
    string token;
    int found{0}, last{0};
    while (last != string::npos) {
      found = path.find("/", ++last);
      if (found == string::npos) {
        token = path.substr(last, path.size() - last);
      } else {
        token = path.substr(last, found - last);
      }
      last = found;

      if (token == "" || token == ".")
        continue;
      if (token == "..") {
        if (!st.empty())
          st.pop();
      } else {
        st.push(token);
      }
    }

    string res;
    while (!st.empty()) {
      res = "/" + st.top() + res;
      st.pop();
    }
    return (res.size()) ? res : "/";
  }
};