#include "509.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace
{
TEST(fib_Test, Test_fib)
{
    Solution s;

    EXPECT_EQ(s.fib(0), 0);
    EXPECT_EQ(s.fib(1), 1);
    EXPECT_EQ(s.fib(2), 1);
    EXPECT_EQ(s.fib(3), 2);
    EXPECT_EQ(s.fib(4), 3);
}

} // namespace
