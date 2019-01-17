#include "501.hpp"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

namespace
{
TEST(findMode_Test, Test_findMode)
{
    Solution s;

    auto root = stringToTreeNode("[1,null,2,2]");
    ASSERT_THAT(s.findMode(root), ::testing::ElementsAre(2));
}

TEST(findMode_Test, Test_findMode_2)
{
    Solution s;

    auto root = stringToTreeNode("[6,2,8,0,4,7,9,null,null,2,6]");
    ASSERT_THAT(s.findMode(root), ::testing::ElementsAre(2, 6));
}

} // namespace
