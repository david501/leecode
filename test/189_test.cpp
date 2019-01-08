#include "189.hpp"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace
{

TEST(rotateTest, Testrotate)
{
    Solution s;
    vector<int> l{1, 2, 3, 4, 5, 6, 7};
    s.rotate(l, 3);
    ASSERT_THAT(l, ::testing::ElementsAre(5, 6, 7, 1, 2, 3, 4));
}

TEST(rotateTest, Testrotate_2)
{
    Solution s;
    vector<int> l{-1, -100, 3, 99};
    s.rotate(l, 2);
    ASSERT_THAT(l, ::testing::ElementsAre(3, 99, -1, -100));
}

} // namespace
