#include "common.h"

class Solution {
public:
  int robotSim(vector<int> &commands, vector<vector<int>> &obstacles) {
    set<pair<int, int>> grid_obstacles;
    for (auto &vec : obstacles) {
      grid_obstacles.insert(make_pair(vec[0], vec[1]));
    }

    int direction = 0;
    int x = 0, y = 0;
    auto move = [&](int steps) {
      for (int step = 1; step <= steps; ++step) {
        int nx = x, ny = y;
        if (direction == 0)
          ++ny;
        else if (direction == 1)
          ++nx;
        else if (direction == 2)
          --ny;
        else if (direction == 3)
          --nx;

        if (grid_obstacles.count(make_pair(nx, ny)) == 0) {
          x = nx;
          y = ny;
        }
      }
    };

    int max_distance = 0;
    for (int command : commands) {
      if (command == -2) {
        direction = (direction + 3) % 4;
      } else if (command == -1) {
        direction = (direction + 1) % 4;
      } else if (1 <= command && command <= 9) {
        move(command);
        max_distance = max(max_distance, x * x + y * y);
      }
    }
    return max_distance;
  }
};