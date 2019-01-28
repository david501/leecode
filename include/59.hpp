class Solution {
public:
  vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> res(n);
    for (auto &v : res)
      v.resize(n);

    int t{0}, b{n - 1}, l{0}, r{n - 1}, k{1};
    while (true) {
      // top
      for (int col = l; col <= r; ++col)
        res[t][col] = k++;
      if (++t > b)
        break;

      // right
      for (int row = t; row <= b; ++row)
        res[row][r] = k++;
      if (--r < l)
        break;

      // bottom
      for (int col = r; col >= l; --col)
        res[b][col] = k++;
      if (--b < t)
        break;

      // left
      for (int row = b; row >= t; --row)
        res[row][l] = k++;
      if (++l > r)
        break;
    }
    return res;
  }
};