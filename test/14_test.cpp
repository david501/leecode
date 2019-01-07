#include "14.hpp"
#include <gtest/gtest.h>

namespace
{

class LongestCommonPrefixTest : public ::testing::Test
{
protected:
  LongestCommonPrefixTest()
  {
  }

  ~LongestCommonPrefixTest() override
  {
  }

  void SetUp() override
  {
  }

  void TearDown() override
  {
  }

public:
  Solution s;
};

TEST_F(LongestCommonPrefixTest, TestLongestCommonPrefix)
{
  vector<string> strs1{"flower", "flow", "flight"};
  vector<string> strs2{"dog", "racecar", "car"};
  vector<string> strs3{"aa", "a"};

  EXPECT_EQ(s.longestCommonPrefix(strs1), "fl");
  EXPECT_EQ(s.longestCommonPrefix(strs2), "");
  EXPECT_EQ(s.longestCommonPrefix(strs3), "a");
}

} // namespace
