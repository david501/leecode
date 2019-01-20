class Solution {
public:
  vector<int> findErrorNums(vector<int> &nums) {
    int xor_num = 0;
    int error_num = 0;
    for (int i = 0; i < nums.size(); ++i) {
      const int num = abs(nums[i]);
      xor_num = xor_num ^ num ^ (i + 1);
      if (nums[num] < 0)
        error_num = num;
      else
        nums[num] = -nums[num];
    }
    return {error_num, xor_num ^ error_num};
  }
};