#include "21.hpp"
#include <gtest/gtest.h>

#include <vector>
using std::vector;

namespace
{

class mergeTwoListsTest : public ::testing::Test
{
  protected:
    mergeTwoListsTest()
    {
    }

    ~mergeTwoListsTest() override
    {
    }

    void SetUp() override
    {
    }

    void TearDown() override
    {
    }

    ListNode *createLists(const vector<int> &v)
    {
        ListNode *head = nullptr;
        ListNode *cur = nullptr;

        for (const auto val : v)
        {
            if (!head)
            {
                head = cur = new ListNode(val);
                continue;
            }

            cur->next = new ListNode(val);
            cur = cur->next;
        }

        return head;
    };

    bool compareLists(ListNode *l1, ListNode *l2)
    {
        while (l1 && l2)
        {
            if (l1->val != l2->val)
                return false;
            l1 = l1->next;
            l2 = l2->next;
        }
        return !l1 && !l2;
    }

  public:
    Solution s;
};

TEST_F(mergeTwoListsTest, TestmergeTwoLists)
{
    auto l1 = createLists({1, 2, 4});
    auto l2 = createLists({1, 3, 4});
    auto expected = createLists({1, 1, 2, 3, 4, 4});

    auto result = s.mergeTwoLists(l1, l2);
    EXPECT_EQ(compareLists(result, expected), true);
}

TEST_F(mergeTwoListsTest, TestmergeTwoListsWithEmptyLists)
{
    auto l1 = createLists({1, 2, 4});
    auto l2 = createLists({1, 3, 4});

    auto result = s.mergeTwoLists(nullptr, l2);
    EXPECT_EQ(compareLists(result, l2), true);
    result = s.mergeTwoLists(l1, nullptr);
    EXPECT_EQ(compareLists(result, l1), true);
}

TEST_F(mergeTwoListsTest, TestmergeTwoListsWithShortL2)
{
    auto l1 = createLists({1, 2, 4, 5, 6});
    auto l2 = createLists({1, 3, 4});
    auto expected = createLists({1, 1, 2, 3, 4, 4, 5, 6});

    auto result = s.mergeTwoLists(l1, l2);
    EXPECT_EQ(compareLists(result, expected), true);
}

TEST_F(mergeTwoListsTest, TestmergeTwoListsWithShortL1)
{
    auto l1 = createLists({1, 2, 4});
    auto l2 = createLists({1, 3, 5, 6});
    auto expected = createLists({1, 1, 2, 3, 4, 5, 6});

    auto result = s.mergeTwoLists(l1, l2);
    EXPECT_EQ(compareLists(result, expected), true);
}


TEST_F(mergeTwoListsTest, TestmergeTwoListsWithTwoShortLists)
{
    auto l1 = createLists({2});
    auto l2 = createLists({1});
    auto expected = createLists({1,2});

    auto result = s.mergeTwoLists(l1, l2);
    EXPECT_EQ(compareLists(result, expected), true);
}
} // namespace
