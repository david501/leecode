class Solution {
public:
  int dominantIndex(vector<int> &nums) {
    int index = 0, largest = nums[0];
    int second = INT_MIN;
    for (int i = 1; i < nums.size(); ++i) {
      if (nums[i] > largest) {
        second = largest;
        largest = nums[i];
        index = i;
      }
      else if (nums[i] > second) { second = nums[i]; }
    }
    if (largest / 2 >= second)
      return index;
    return -1;
  }
};