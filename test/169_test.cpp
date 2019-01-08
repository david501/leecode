#include "169.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace
{

TEST(majorityElementTest, TestmajorityElement)
{
    Solution s;
    vector<int> v{3, 2, 3};
    EXPECT_EQ(s.majorityElement(v), 3);
}

TEST(majorityElementTest, TestmajorityElement_2)
{
    Solution s;
    vector<int> v{2, 2, 1, 1, 1, 2, 2};
    EXPECT_EQ(s.majorityElement(v), 2);
}

} // namespace
