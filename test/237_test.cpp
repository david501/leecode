#include "237.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(deleteNodeTest, TestdeleteNode)
{
    Solution s;
    auto head=stringToListNode("[4,5,1,9]");
    s.deleteNode(head->next);
    EXPECT_EQ(listNodeToString(head), "[4, 1, 9]");

}

TEST(deleteNodeTest, TestdeleteNode_2)
{
    Solution s;
    auto head=stringToListNode("[4,5,1,9]");
    s.deleteNode(head->next->next);
    EXPECT_EQ(listNodeToString(head), "[4, 5, 9]");
}

} // namespace
