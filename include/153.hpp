class Solution {
public:
  int findMin(vector<int> &nums) {
    const int n = nums.size();
    if (nums[n - 1] >= nums[0])
      return nums[0];

    int l{0}, r{n};
    while (l < r) {
      int mid = l + (r - l) / 2;
      if (nums[mid] >= nums[0]) 
        l = mid + 1;
      else
        r = mid;
    }
    return nums[l];
  }
};