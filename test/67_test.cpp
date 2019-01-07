#include "67.hpp"
#include <gtest/gtest.h>

namespace
{

class addBinaryTest : public ::testing::Test
{
  protected:
    addBinaryTest()
    {
    }

    ~addBinaryTest() override
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

TEST_F(addBinaryTest, Test_addBinary)
{
    EXPECT_EQ(s.addBinary("11","1"), "100");
    EXPECT_EQ(s.addBinary("1010","1011"), "10101");
}

} //namespace
