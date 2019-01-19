class Solution {
public:
  int findLHS(vector<int> &nums) {
    map<int, int> count;
    for (int n : nums)
      ++count[n];

    int longest = 0;
    int last = INT_MAX;
    for (auto it : count) {
      if (it.first - last == 1)
        longest = max(longest, count[last] + it.second);
      last = it.first;
    }

    return longest;
  }
};