class Solution {
public:
  // bool isValidSudoku(vector<vector<char>> &board) {
  //   struct Checker {
  //     bool m[9] = {false};
  //     bool invalid(char c) {
  //       if (c == '.')
  //         return false;
  //       if (m[c - '1'])
  //         return true;
  //       m[c - '1'] = true;
  //       return false;
  //     };
  //   };

  //   for (int i = 0; i < 9; ++i) {
  //     Checker row, col, box;
  //     const int box_c_off = (i % 3) * 3;
  //     const int box_r_off = (i / 3) * 3;
  //     for (int j = 0; j < 9; ++j) {
  //       if (row.invalid(board[i][j]))
  //         return false;
  //       if (col.invalid(board[j][i]))
  //         return false;
  //       if (box.invalid(board[box_r_off + j % 3][box_c_off + j / 3]))
  //         return false;
  //     }
  //   }
  //   return true;
  // }

  bool isValidSudoku(vector<vector<char>> &board) {
    bool row[9][9] = {false};
    bool col[9][9] = {false};
    bool box[9][9] = {false};

    for (int r = 0; r < 9; ++r) {
      for (int c = 0; c < 9; ++c) {
        if (board[r][c] != '.') {
          const int num = board[r][c] - '1';
          const int bid = (r / 3) * 3 + c / 3;
          if (row[r][num] || col[c][num] || box[bid][num])
            return false;
          row[r][num] = col[c][num] = box[bid][num] = true;
        }
      }
    }
    return true;
  }
};