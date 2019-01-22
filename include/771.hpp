class Solution {
public:
  int numJewelsInStones(string J, string S) {
    bool lower[26] = {false};
    bool upper[26] = {false};
    for (char c : J) {
      if (c >= 'A' && c <= 'Z')
        upper[c - 'A'] = true;
      else
        lower[c - 'a'] = true;
    }

    int count = 0;
    for (char c : S) {
      if (c >= 'A' && c <= 'Z')
        count += upper[c - 'A'];
      else
        count += lower[c - 'a'];
    }
    return count;
  }
};