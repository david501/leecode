#include "387.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(firstUniqCharTest, TestfirstUniqChar)
{
    Solution s;

    EXPECT_EQ(s.firstUniqChar("leetcode"), 0);
    EXPECT_EQ(s.firstUniqChar("loveleetcode"), 2);
}

} // namespace