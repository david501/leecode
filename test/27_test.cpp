#include "27.hpp"
#include <gtest/gtest.h>

namespace
{

class RemoveElementTest : public ::testing::Test
{
  protected:
    RemoveElementTest()
    {
    }

    ~RemoveElementTest() override
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

TEST_F(RemoveElementTest, TestremoveElement)
{
    vector<int> n1{3,2,2,3};
    vector<int> n2{0,1,2,2,3,0,4,2};
    EXPECT_EQ(s.removeElement(n1, 3), 2);
    EXPECT_EQ(s.removeElement(n2, 2), 5);
}

} // namespace
