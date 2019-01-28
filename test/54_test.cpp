#include "54.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {
TEST(spiralOrder_Test, Test_spiralOrder) {
  Solution s;

  vector<vector<int>> nums{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  auto output = s.spiralOrder(nums);
  ASSERT_THAT(output, ::testing::ElementsAre(1, 2, 3, 6, 9, 8, 7, 4, 5));
}

TEST(spiralOrder_Test, Test_spiralOrder_1) {
  Solution s;

  vector<vector<int>> nums{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  auto output = s.spiralOrder(nums);
  ASSERT_THAT(output,
              ::testing::ElementsAre(1, 2, 3, 4, 8, 12, 11, 10, 9, 5, 6, 7));
}

TEST(spiralOrder_Test, Test_spiralOrder_2) {
  Solution s;

  vector<vector<int>> nums{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};
  auto output = s.spiralOrder(nums);
  ASSERT_THAT(output,
              ::testing::ElementsAre(1, 2, 3, 6, 9, 12, 11, 10, 7, 4, 5, 8));
}

TEST(spiralOrder_Test, Test_spiralOrder_3) {
  Solution s;

  vector<vector<int>> nums{{1}, {2}, {3}};
  auto output = s.spiralOrder(nums);
  ASSERT_THAT(output, ::testing::ElementsAre(1, 2, 3));
} // namespace

} // namespace
