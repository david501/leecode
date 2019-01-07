#include "69.hpp"
#include <gtest/gtest.h>

namespace
{

class mySqrtTest : public ::testing::Test
{
  protected:
    mySqrtTest()
    {
    }

    ~mySqrtTest() override
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

TEST_F(mySqrtTest, Test_mySqrt)
{
    EXPECT_EQ(s.mySqrt(0), 0);
    EXPECT_EQ(s.mySqrt(1), 1);
    EXPECT_EQ(s.mySqrt(2), 1);
    EXPECT_EQ(s.mySqrt(4), 2);
    EXPECT_EQ(s.mySqrt(8), 2);
    EXPECT_EQ(s.mySqrt(20), 4);
    EXPECT_EQ(s.mySqrt(2147395599), 46339);
    EXPECT_EQ(s.mySqrt(2147483647), 46340);
}

} //namespace
