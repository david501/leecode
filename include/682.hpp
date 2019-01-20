class Solution {
public:
  int calPoints(vector<string> &ops) {
    int total = 0;
    vector<int> points;
    int point;
    for (const auto &op : ops) {
      if (op == "+") {
        const int size = points.size();
        point = points[size - 1] + points[size - 2];
        total += point;
        points.push_back(point);
      } else if (op == "D") {
        point = points.back() * 2;
        total += point;
        points.push_back(point);
      } else if (op == "C") {
        total -= points.back();
        points.pop_back();
      } else {
        point = atoi(op);
        total += point;
        points.push_back(point);
      }
    }
    return total;
  }
};