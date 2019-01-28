#include "49.hpp"
#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace {
TEST(groupAnagrams_Test, Test_groupAnagrams) {
  Solution s;

  vector<string> nums{"eat", "tea", "tan", "ate", "nat", "bat"};
  auto output = s.groupAnagrams(nums);
  EXPECT_EQ(output.size(), 3);
  ASSERT_THAT(output[0], ::testing::ElementsAre("bat"));
  ASSERT_THAT(output[1], ::testing::ElementsAre("eat", "tea", "ate"));
  ASSERT_THAT(output[2], ::testing::ElementsAre("tan", "nat"));
}

} // namespace
