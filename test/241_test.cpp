#include "241.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {

TEST(diffWaysToCompute_Test, Test_diffWaysToCompute) {
  Solution s;

  ASSERT_THAT(s.diffWaysToCompute("2-1-1"), ::testing::ElementsAre(2, 0));
}

TEST(diffWaysToCompute_Test, Test_diffWaysToCompute_1) {
  Solution s;

  ASSERT_THAT(s.diffWaysToCompute("2*3-4*5"),
              ::testing::ElementsAre(-34, -10, -14, -10, 10));
}

} // namespace