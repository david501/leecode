#include "345.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(reverseVowelsTest, TestreverseVowels)
{
    Solution s;

    EXPECT_EQ(s.reverseVowels("hello"), "holle");

    EXPECT_EQ(s.reverseVowels("leetcode"), "leotcede");
}

} // namespace
