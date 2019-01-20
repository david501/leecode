class Solution {
public:
  int findLengthOfLCIS(vector<int> &nums) {
    int longest = nums.size()>0;
    int length = 1;
    for (int i = 1; i < nums.size(); ++i) {
      if (nums[i - 1] < nums[i]) {
        ++length;
        if (length > longest)
          longest = length;
      } else
        length = 1;
    }
    return longest;
  }
};