class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    if (nums.empty())
      return 0;

    int index = 1;
    bool dup=false;
    for (int i = 1; i < nums.size(); ++i) {
      if (nums[i] == nums[index - 1]) {
        if (dup)
          continue;
        dup=true;
      } else {
        dup=false;
      }

      if (i != index)
        nums[index++] = nums[i];
      else
        ++index;
    }
    return index;
  }
};