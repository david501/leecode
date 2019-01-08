#include "167.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace
{

TEST(twoSumTest, TesttwoSum)
{
    Solution s;
    vector<int> l{2, 7, 11, 15};

    ASSERT_THAT(s.twoSum(l, 9), ::testing::ElementsAre(1,2));
}

TEST(twoSumTest, TesttwoSum_2)
{
    Solution s;
    vector<int> l{2, 7, 11, 15};

    ASSERT_THAT(s.twoSum(l, 22), ::testing::ElementsAre(2,4));
}

} // namespace
