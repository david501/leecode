#include "26.hpp"
#include <gtest/gtest.h>

namespace
{

class RemoveDuplicatesTest : public ::testing::Test
{
  protected:
    RemoveDuplicatesTest()
    {
    }

    ~RemoveDuplicatesTest() override
    {
    }

    void SetUp() override
    {
    }

    void TearDown() override
    {
    }

  public:
    Solution s;
};

TEST_F(RemoveDuplicatesTest, TestremoveDuplicates)
{
    vector<int> n1{1,1,2};
    vector<int> n2{0,0,1,1,1,2,2,3,3,4};
    EXPECT_EQ(s.removeDuplicates(n1), 2);
    EXPECT_EQ(s.removeDuplicates(n2), 5);
}

} // namespace
