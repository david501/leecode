class Solution {
public:
  vector<int> powerfulIntegers(int x, int y, int bound) {
    set<int> res;

    for (int xx = 1; xx < bound; xx *= x) {
      const int bound_y = bound - xx;
      for (int yy = 1; yy <= bound_y; yy *= y) {
        res.insert(xx + yy);
        if (y == 1)
          break;
      }
      if (x == 1)
        break;
    }

    return {res.begin(), res.end()};
  }
};