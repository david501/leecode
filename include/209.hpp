class Solution {
public:
  int minSubArrayLen(int s, vector<int> &nums) {
    int l{0}, r{0}, sum{0}, len{INT_MAX};
    for (int i = 0; i < nums.size(); ++i) {
      sum += nums[i];
      ++r;
      while (sum >= s) {
        int d = sum - s;
        if (d >= nums[l]) {
          sum -= nums[l++];
        } else {
          len = min(len, r - l);
          break;
        }
      }
    }
    return len == INT_MAX ? 0 : len;
  }
};