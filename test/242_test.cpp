#include "242.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(isAnagramTest, TestisAnagram)
{
    Solution s;

    EXPECT_EQ(s.isAnagram("anagram", "nagaram"), true);

}

TEST(isAnagramTest, TestisAnagram_2)
{
    Solution s;

    EXPECT_EQ(s.isAnagram("rat", "car"), false);
}

} // namespace
