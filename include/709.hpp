class Solution {
public:
  string toLowerCase(string str) {
    constexpr int delta = 'A' - 'a';
    for (char &c : str) {
      if (c >= 'A' && c <= 'Z')
        c -= delta;
    }
    return str;
  }
};