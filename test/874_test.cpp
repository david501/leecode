#include "874.hpp"
#include <gtest/gtest.h>

namespace {
TEST(robotSim_Test, Test_robotSim) {
  Solution s;

  vector<int> commands{4, -1, 3};
  vector<vector<int>> obstacles{};
  EXPECT_EQ(s.robotSim(commands, obstacles), 25);
}

TEST(robotSim_Test, Test_robotSim_2) {
  Solution s;

  vector<int> commands{4, -1, 4, -2, 4};
  vector<vector<int>> obstacles{{2, 4}};
  EXPECT_EQ(s.robotSim(commands, obstacles), 65);
}
} // namespace
