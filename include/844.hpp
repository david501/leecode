class Solution {
public:
  bool backspaceCompare(string S, string T) {
    auto scan = [](const string &str) -> stack<int> {
      stack<int> st;
      for (char c : str) {
        if (c != '#')
          st.push(c);
        else {
          if (!st.empty())
            st.pop();
        }
      }
      return st;
    };

    return scan(S) == scan(T);
  }
};