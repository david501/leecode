class Solution {
public:
  int findUnsortedSubarray(vector<int> &nums) {
    const int n = nums.size();
    int begin = -1, end = -2, max_ = nums[0], min_ = nums[n - 1];
    for (int i = 1; i < n; ++i) {
      max_ = max(max_, nums[i]);
      min_ = min(min_, nums[n - 1 - i]);
      if (nums[i] < max_)
        end = i;
      if (nums[n - 1 - i] > min_)
        begin = n - 1 - i;
    }
    return end - begin + 1;
  }
};