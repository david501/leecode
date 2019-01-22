class Solution {
public:
  double largestTriangleArea(vector<vector<int>> &points) {
    auto edge = [](const vector<int> &p1, const vector<int> &p2) -> double {
      const double dx = p1[0] - p2[0];
      const double dy = p1[1] - p2[1];
      return sqrt(dx * dx + dy * dy);
    };
    auto area = [&](const vector<int> &p1, const vector<int> &p2,
                    const vector<int> &p3) -> double {
      const double a = edge(p1, p2);
      const double b = edge(p1, p3);
      const double c = edge(p2, p3);
      const double s = (a + b + c) / 2.0;
      return sqrt(s * (s - a) * (s - b) * (s - c));
    };

    const int n = points.size();
    double max_area = 0.0;
    for (int i = 0; i < n - 2; ++i) {
      for (int j = i + 1; j < n - 1; ++j) {
        for (int k = j + 1; k < n; ++k) {
          max_area = max(max_area, area(points[i], points[j], points[k]));
        }
      }
    }
    return max_area;
  }
}
}
;