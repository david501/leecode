#include "common.h"

class Solution {
public:
  vector<int> findOrder(int numCourses, vector<pair<int, int>> &prerequisites) {
    enum class Color {WHITE, BLACK, GRAY};
    vector<vector<int>> graph(numCourses);
    vector<Color> visited(numCourses, Color::WHITE);
    vector<int> res(numCourses);
    int index = 0;

    function<bool(int)> findPre = [&](int c) -> bool {
      if (visited[c] == Color::BLACK)
        return true;

      visited[c] = Color::GRAY;
      for (int pre : graph[c]) {
        if (visited[pre] == Color::GRAY || !findPre(pre))
          return false;
      }

      visited[c] = Color::BLACK;
      res[index++] = c;
      return true;
    };

    for (auto &pre : prerequisites) {
      graph[pre.first].push_back(pre.second);
    }

    for (int i = 0; i < numCourses && index < numCourses; ++i) {
      if (!findPre(i))
        return {};
    }

    return res;
  }
};