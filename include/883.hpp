class Solution {
public:
  int projectionArea(vector<vector<int>> &grid) {
    const int rows = grid.size();
    const int cols = grid[0].size();

    int area = 0;
    for (int r = 0; r < rows; ++r) {
      int project_z = grid[r][0] > 0;
      int project = grid[r][0];
      for (int c = 1; c < cols; ++c) {
        project = max(project, grid[r][c]);
        project_z += grid[r][c] > 0;
      }
      area += project + project_z;
    }
    for (int c = 0; c < cols; ++c) {
      int project = grid[0][c];
      for (int r = 1; r < rows; ++r) {
        project = max(project, grid[r][c]);
      }
      area += project;
    }
    return area;
  }
};