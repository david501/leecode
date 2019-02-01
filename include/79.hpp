class Solution {
public:
  bool exist(vector<vector<char>> &board, string word) {
    if (board.empty())
      return false;
    const int m = board.size();
    const int n = board[0].size();
    if (!n || !word.size())
      return false;

    bool success = false;
    int dr[] = {-1, 0, 1, 0};
    int dc[] = {0, 1, 0, -1};
    function<void(int, int, int)> dfs = [&](int r, int c, int k) {
      if (k == word.size() - 1) {
        success = true;
        return;
      }

      const char ch = board[r][c];
      for (int i = 0; i < 4 && !success; ++i) {
        const int nr = r + dr[i];
        const int nc = c + dc[i];
        if (nr < 0 || nr >= m || nc < 0 || nc >= n ||
            board[nr][nc] != word[k + 1])
          continue;

        board[r][c] = 0;
        dfs(nr, nc, k + 1);
        board[r][c] = ch;
      }
    };

    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
        if (board[i][j] == word[0])
          dfs(i, j, 0);
        if (success)
          return true;
      }
    }
    return false;
  }
};