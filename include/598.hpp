class Solution {
public:
  int maxCount(int m, int n, vector<vector<int>> &ops) {
    int min_row = INT_MAX;
    int min_col = INT_MAX;
    for (auto op : ops) {
      min_row = min(min_row, op[0]);
      min_col = min(min_col, op[1]);
    }
    min_row = min(min_row, m);
    min_col = min(min_col, n);
    return min_row * min_col;
  }
};