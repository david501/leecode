#include "202.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace
{

TEST(isHappyTest, TestisHappy)
{
    Solution s;

    EXPECT_EQ(s.isHappy(19), true);
}

TEST(isHappyTest, TestisHappy_2)
{
    Solution s;

    EXPECT_EQ(s.isHappy(11), false);
}
} // namespace
