#include "204.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace
{

TEST(countPrimesTest, TestcountPrimes)
{
    Solution s;

    EXPECT_EQ(s.countPrimes(10), 4);
}

} // namespace
