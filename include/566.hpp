class Solution {
public:
  vector<vector<int>> matrixReshape(vector<vector<int>> &nums, int r, int c) {
    const int nr = nums.size();
    if (!nr)
      return {};

    const int nc = nums[0].size();
    if (nr * nc != r * c)
      return nums;

    vector<vector<int>> res(r);
    for (int i = 0; i < r; ++i) {
      auto &v = res[i];
      v.reserve(c);
      for (int j = 0; j < c; ++j) {
        const int k = i * c + j;
        v.push_back(nums[k / nc][k % nc]);
      }
    }
    return res;
  }
};