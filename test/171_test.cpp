#include "171.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace
{

TEST(titleToNumberTest, TesttitleToNumber)
{
    Solution s;

    EXPECT_EQ(s.titleToNumber("A"), 1);
}

TEST(titleToNumberTest, TesttitleToNumber_2)
{
    Solution s;
    EXPECT_EQ(s.titleToNumber("AB"), 28);
}

TEST(titleToNumberTest, TesttitleToNumber_3)
{
    Solution s;
    EXPECT_EQ(s.titleToNumber("ZY"), 701);
}

} // namespace
