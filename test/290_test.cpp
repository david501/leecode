#include "290.hpp"
#include <gtest/gtest.h>


namespace
{
TEST(wordPatternTest, TestwordPattern)
{
    Solution s;
    EXPECT_EQ(s.wordPattern("abba", "dog cat cat dog"), true);
    EXPECT_EQ(s.wordPattern("abba", "dog cat cat fish"), false);
    EXPECT_EQ(s.wordPattern("aaaa", "dog cat cat dog"), false);
    EXPECT_EQ(s.wordPattern("abba", "dog dog dog dog"), false);
}

TEST(wordPatternTest, TestwordPattern_2)
{
    Solution s;
    EXPECT_EQ(s.wordPattern("abba", "dog cat cat dog"), true);
    EXPECT_EQ(s.wordPattern("abbaa", "dog cat cat dog"), false);
    EXPECT_EQ(s.wordPattern("abb", "dog cat cat dog"), false);
}

TEST(wordPatternTest, TestwordPattern_3)
{
    Solution s;
    EXPECT_EQ(s.wordPattern("", "dog cat cat dog"), false);
    EXPECT_EQ(s.wordPattern("abba", ""), false);
}

} // namespace
