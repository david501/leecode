#include "28.hpp"
#include <gtest/gtest.h>

namespace
{

class strStrTest : public ::testing::Test
{
  protected:
    strStrTest()
    {
    }

    ~strStrTest() override
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

TEST_F(strStrTest, TeststrStr)
{
    EXPECT_EQ(s.strStr("hello", "ll"), 2);
    EXPECT_EQ(s.strStr("aaaaa", "bba"), -1);
}

} // namespace
