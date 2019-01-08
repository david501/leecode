#include "168.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace
{

TEST(convertToTitleTest, TestconvertToTitle)
{
    Solution s;

    EXPECT_EQ(s.convertToTitle(1), "A");
}

TEST(convertToTitleTest, TestconvertToTitle_2)
{
    Solution s;
    EXPECT_EQ(s.convertToTitle(28), "AB");
}


TEST(convertToTitleTest, TestconvertToTitle_3)
{
    Solution s;
    EXPECT_EQ(s.convertToTitle(701), "ZY");
}

} // namespace
