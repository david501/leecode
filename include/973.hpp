class Solution {
public:
  vector<vector<int>> kClosest(vector<vector<int>> &points, int K) {

    auto compare = [](const vector<int> &a, const vector<int> &b) -> bool {
      return a[0] * a[0] + a[1] * a[1] < b[0] * b[0] + b[1] * b[1];
    };

    sort(points.begin(), points.end(), compare);

    return {points.begin(), points.begin()+K};
  }
};