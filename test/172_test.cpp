#include "172.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace
{

TEST(trailingZeroesTest, TesttrailingZeroes)
{
    Solution s;

    EXPECT_EQ(s.trailingZeroes(3), 0);
}

TEST(trailingZeroesTest, TesttrailingZeroes_2)
{
    Solution s;
    EXPECT_EQ(s.trailingZeroes(5), 1);
}

TEST(trailingZeroesTest, TesttrailingZeroes_3)
{
    Solution s;
    EXPECT_EQ(s.trailingZeroes(30), 7);
}

} // namespace
