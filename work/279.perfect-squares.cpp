/*
 * @lc app=leetcode id=279 lang=cpp
 *
 * [279] Perfect Squares
 *
 * https://leetcode.com/problems/perfect-squares/description/
 *
 * algorithms
 * Medium (41.31%)
 * Total Accepted:    170.8K
 * Total Submissions: 413.6K
 * Testcase Example:  '12'
 *
 * Given a positive integer n, find the least number of perfect square numbers
 * (for example, 1, 4, 9, 16, ...) which sum to n.
 *
 * Example 1:
 *
 *
 * Input: n = 12
 * Output: 3
 * Explanation: 12 = 4 + 4 + 4.
 *
 * Example 2:
 *
 *
 * Input: n = 13
 * Output: 2
 * Explanation: 13 = 4 + 9.
 */
class Solution {
public:
  int numSquares(int n) {
    vector<int> nums;
    for (int i = 1; i * i <= n; ++i) {
      nums.push_back(i * i);
    }

    int res = INT_MAX;
    function<void(int, int)> helper = [&](int r, int k) {
      if (r == 0) {
        res = min(res, k);
        return;
      }
      if (k >= res - 1)
        return;

      for (int i = nums.size() - 1; i >= 0; --i) {
        if (r >= nums[i])
          helper(r - nums[i], k + 1);
      }
    };

    helper(n, 0);
    return res;
  }
};
