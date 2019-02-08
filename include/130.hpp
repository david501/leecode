class Solution {
public:
  void solve(vector<vector<char>> &board) {
    const int rows = board.size();
    if (rows < 3)
      return;
    const int cols = board[0].size();

    const int dr[] = {-1, 0, 1, 0};
    const int dc[] = {0, 1, 0, -1};
    const char mark = 'x';

    function<void(int, int)> helper = [&](int r, int c) {
      if (board[r][c] != 'O')
        return;
      board[r][c] = mark;

      for (int i = 0; i < 4; ++i) {
        const int nr = r + dr[i];
        const int nc = c + dc[i];
        if (nr == 0 || nr == rows - 1 || nc == 0 || nc == cols - 1)
          continue;
        helper(nr, nc);
      }
    };

    for (int i = 1; i < rows - 1; ++i) {
      if (board[i][0] == 'O')
        helper(i, 1);
      if (board[i][cols - 1] == 'O')
        helper(i, cols - 2);
    }

    for (int i = 1; i < cols - 1; ++i) {
      if (board[0][i] == 'O')
        helper(1, i);
      if (board[rows - 1][i] == 'O')
        helper(rows - 2, i);
    }

    for (int i = 1; i < rows - 1; ++i)
      for (int j = 1; j < cols - 1; ++j)
        if (board[i][j] == 'O')
          board[i][j] = 'X';
        else if (board[i][j] == mark)
          board[i][j] = 'O';
  }
};