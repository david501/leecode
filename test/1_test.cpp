#include <gtest/gtest.h>
#include "1.hpp"

TEST(TestSuite_1, TestTwoSum)
{
    Solution s;
    vector<int> input = {2, 7, 11, 15};
    vector<int> expected = {0, 1};
    auto result = s.twoSum(input, 9);
    EXPECT_EQ(result.size(), 2);
    for (int i = 0; i < 2; ++i)
        EXPECT_EQ(expected[i], result[i]);
}
