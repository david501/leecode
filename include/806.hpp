class Solution {
public:
  vector<int> numberOfLines(vector<int> &widths, string S) {
    int lines = 0;
    int units = 0;
    for (char c : S) {
      const int cur_unit = widths[c - 'a'];
      if (lines == 0 && cur_unit > 0)
        ++lines;

      if (units + cur_unit <= 100) {
        units += cur_unit;
      } else {
        ++lines;
        units = cur_unit;
      }
    }
    return {lines, units};
  }
};