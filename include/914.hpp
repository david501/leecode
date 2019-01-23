class Solution {
public:
  bool hasGroupsSizeX(vector<int> &deck) {
    map<int, int> cards;
    for (int card : deck)
      ++cards[card];

    int min_num = INT_MAX;
    for (auto &it : cards)
      min_num = min(min_num, it.second);

    for (int x = 2; x <= min_num; ++x) {
      if (x != 2 && x % 2 == 0)
        continue;
      bool flag = true;
      for (auto &it : cards)
        if (it.second % x != 0) {
          flag = false;
          break;
        }
      if (flag)
        return true;
    }
    return false;
  }
};