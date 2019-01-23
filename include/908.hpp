class Solution {
public:
  int smallestRangeI(vector<int> &A, int K) {
    auto min_max = minmax(A.begin(), A.end());
    return max(0, *min_max.second - *min_max.first - 2 * K);
  }
};