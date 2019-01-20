class Solution {
public:
  double findMaxAverage(vector<int> &nums, int k) {
    int max_sum = 0;
    for (int i = 0; i < k; ++i) {
      max_sum += nums[i];
    }
    for (int i = k, sum = max_sum; i < nums.size(); ++i) {
      sum += nums[i] - nums[i - k];
      if (sum > max_sum) {
        max_sum = sum;
      }
    }
    return double(max_sum) / k;
  }
};