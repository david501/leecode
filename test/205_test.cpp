#include "205.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace
{

TEST(isIsomorphic_Test, Test_isIsomorphic)
{
    Solution s;

    EXPECT_EQ(s.isIsomorphic("egg", "add"), true);
}

TEST(isIsomorphic_Test, Test_isIsomorphic_1)
{
    Solution s;

    EXPECT_EQ(s.isIsomorphic("foo", "bar"), false);
}

TEST(isIsomorphic_Test, Test_isIsomorphic_2)
{
    Solution s;

    EXPECT_EQ(s.isIsomorphic("paper", "title"), true);
}

} // namespace
