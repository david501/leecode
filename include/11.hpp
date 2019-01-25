#include "common.h"
class Solution {
public:
  int maxArea(vector<int> &height) {
    int max_area = 0;
    int left = 0, right = height.size() - 1;
    while (left < right) {
      const int min_height = min(height[left], height[right]);
      max_area = max(max_area, min_height * (right - left));

      while (height[left] <= min_height && left < right)
        ++left;
      while (height[right] <= min_height && left < right)
        --right;
    }
    return max_area;
  }
};