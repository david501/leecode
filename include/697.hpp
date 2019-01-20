#include "common.h"

class Solution {
public:
  int findShortestSubArray(vector<int> &nums) {
    struct Data {
      int count{0};
      int start;
      int end;
      void insert(int index) {
        if (count) {
          start = min(start, index);
          end = max(end, index);
        } else {
          start = end = index;
        }
        ++count;
      };
    };

    map<int, Data> dict;
    for (int i = 0; i < nums.size(); ++i) {
      dict[nums[i]].insert(i);
    }

    int max_count = 0;
    int width = INT_MAX;
    for (auto &it : dict) {
      if (it.second.count > max_count) {
        max_count = it.second.count;
        width = it.second.end - it.second.start + 1;
      } else if (it.second.count == max_count) {
        width = min(width, it.second.end - it.second.start + 1);
      }
    }

    return width;
  }
};