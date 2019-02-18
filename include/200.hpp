class Solution {
public:
  int numIslands(vector<vector<char>> &grid) {
    const int rows = grid.size();
    if (rows == 0)
      return 0;
    const int cols = grid[0].size();

    int dr[4] = {-1, 0, 1, 0};
    int dc[4] = {0, 1, 0, -1};
    function<void(int, int)> scan = [&](int r, int c) {
      if (r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] == '0')
        return;

      grid[r][c] = '0';
      for (int i = 0; i < 4; ++i) {
        scan(r + dr[i], c + dc[i]);
      }
    };

    int res = 0;
    for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < cols; ++j) {
        if (grid[i][j] == '1') {
          scan(i, j);
          ++res;
        }
      }
    }
    return res;
  }
};