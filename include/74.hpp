class Solution {
public:
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    if (matrix.empty())
      return false;
    const int m = matrix.size();
    const int n = matrix[0].size();
    if (n == 0)
      return false;

    int left{0}, right{m};
    while (left < right) {
      const int mid = left + (right - left) / 2;
      const int val = matrix[mid][n - 1];
      if (val == target)
        return true;
      if (val < target)
        left = mid + 1;
      else
        right = mid;
    }
    if(left>=m) return false;

    int l{0}, r{n};
    while (l < r) {
      const int mid = l + (r - l) / 2;
      const int val = matrix[left][mid];
      if (val == target)
        return true;
      if (val < target)
        l = mid + 1;
      else
        r = mid;
    }

    return false;
  }
};