class Solution {
public:
  int surfaceArea(vector<vector<int>> &grid) {
    const int rows = grid.size();
    const int cols = grid[0].size();

    int area = 0;
    for (int r = 0; r < rows; ++r) {
      int project_z = grid[r][0] != 0;
      int project = grid[r][0] + grid[r][cols - 1];
      for (int c = 1; c < cols; ++c) {
        project += abs(grid[r][c] - grid[r][c - 1]);
        project_z += grid[r][c] != 0;
      }
      area += project + project_z * 2;
    }
    for (int c = 0; c < cols; ++c) {
      int project = grid[0][c] + grid[rows - 1][c];
      for (int r = 1; r < rows; ++r) {
        project += abs(grid[r][c] - grid[r - 1][c]);
      }
      area += project;
    }
    return area;
  }
};