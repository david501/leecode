#include "461.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace
{
TEST(hammingDistanceTest, TesthammingDistance)
{
    Solution s;

    EXPECT_EQ(s.hammingDistance(1, 4), 2);
}

} // namespace
