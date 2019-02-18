class Solution {
public:
  bool canFinish(int numCourses, vector<pair<int, int>> &prerequisites) {
    unordered_map<int, vector<int>> edges;
    int course;

    function<bool(int)> isValid = [&](int pre_course) -> bool {
      if (course == pre_course)
        return false;
      if (!edges.count(pre_course))
        return true;

      for (auto pre : edges[pre_course]) {
        if (!isValid(pre))
          return false;
      }
      return true;
    };

    for (auto &edge : prerequisites) {
      course = edge.first;
      if (!isValid(edge.second))
        return false;
      edges[course].push_back(edge.second);
    }
    return true;
  }
};