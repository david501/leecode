#include "191.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace
{

TEST(hammingWeightTest, TesthammingWeight)
{
    Solution s;

    EXPECT_EQ(s.hammingWeight(11), 3);
}

TEST(hammingWeightTest, TesthammingWeight_2)
{
    Solution s;

    EXPECT_EQ(s.hammingWeight(128), 1);
}


TEST(hammingWeightTest, TesthammingWeight_3)
{
    Solution s;

    EXPECT_EQ(s.hammingWeight(4294967293), 31);
}

} // namespace
