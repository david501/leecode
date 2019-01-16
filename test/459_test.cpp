#include "459.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace
{
TEST(repeatedSubstringPatternTest, TestrepeatedSubstringPattern)
{
    Solution s;

    EXPECT_EQ(s.repeatedSubstringPattern("abab"), true);

    EXPECT_EQ(s.repeatedSubstringPattern("aba"), false);

    EXPECT_EQ(s.repeatedSubstringPattern("abcabcabcabc"), true);
    EXPECT_EQ(s.repeatedSubstringPattern("abac"), false);
    EXPECT_EQ(s.repeatedSubstringPattern("aabaaba"), false);
}

} // namespace
