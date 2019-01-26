#include "17.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {
TEST(letterCombinations_Test, Test_letterCombinations) {
  Solution s;

  ASSERT_THAT(s.letterCombinations(""),
              ::testing::ElementsAre());
}

TEST(letterCombinations_Test, Test_letterCombinations_1) {
  Solution s;

  ASSERT_THAT(s.letterCombinations("23"),
              ::testing::ElementsAre("ad", "bd", "cd", "ae", "be", "ce", "af",
                                     "bf", "cf"));
}

} // namespace
