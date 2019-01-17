class Solution
{
  public:
    int islandPerimeter(vector<vector<int>> &grid)
    {
        const int rows = grid.size();
        if (rows < 1)
            return 0;
        const int columns = grid[0].size();

        int l = 0;
        for (int row = 0; row < rows; ++row)
        {
            for (int column = 0; column < columns; ++column)
            {
                if (grid[row][column] == 0)
                    continue;
                if (column == 0 || grid[row][column - 1] == 0)
                    ++l;
                if (column == columns - 1 || grid[row][column + 1] == 0)
                    ++l;
                if (row == 0 || grid[row - 1][column] == 0)
                    ++l;
                if (row == rows - 1 || grid[row + 1][column] == 0)
                    ++l;
            }
        }
        return l;
    }
};