class Solution {
public:
  int repeatedNTimes(vector<int> &A) {
    unordered_set<int> nums;
    for (int a : A) {
      if (nums.count(a))
        return a;
      nums.insert(a);
    }
    return -1;
  }
};