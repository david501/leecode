class Solution {
public:
  int numMagicSquaresInside(vector<vector<int>> &grid) {
    auto isValid = [&](int r, int c) -> bool {
      set<int> nums;
      for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
          const int n = grid[r + i][c + j];
          if (n < 1 || n > 9)
            return false;
          nums.insert(n);
        }
      }
      if (nums.size() != 9)
        return false;

      return (grid[r][c] + grid[r][c + 1] + grid[r][c + 2] == 15) &&
             (grid[r + 1][c] + grid[r + 1][c + 1] + grid[r + 1][c + 2] == 15) &&
             (grid[r + 2][c] + grid[r + 2][c + 1] + grid[r + 2][c + 2] == 15) &&
             (grid[r][c] + grid[r + 1][c] + grid[r + 2][c] == 15) &&
             (grid[r][c + 1] + grid[r + 1][c + 1] + grid[r + 2][c + 1] == 15) &&
             (grid[r][c + 2] + grid[r + 1][c + 2] + grid[r + 2][c + 2] == 15) &&
             (grid[r][c] + grid[r + 1][c + 1] + grid[r + 2][c + 2] == 15) &&
             (grid[r + 2][c] + grid[r + 1][c + 1] + grid[r][c + 2] == 15);
    };

    int count = 0;
    const int rows = grid.size();
    const int cols = grid[0].size();
    for (int i = 0; i < rows - 2; ++i) {
      for (int j = 0; j < cols - 2; ++j) {
        if (isValid(i, j))
          ++count;
      }
    }
    return count;
  }
};