#include "383.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(canConstructTest, TestcanConstruct)
{
    Solution s;

    EXPECT_EQ(s.canConstruct("a", "b"), false);
    EXPECT_EQ(s.canConstruct("aa", "ab"), false);
    EXPECT_EQ(s.canConstruct("aa", "aab"), true);
}

} // namespace
