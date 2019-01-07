#include "58.hpp"
#include <gtest/gtest.h>

namespace
{

class lengthOfLastWordTest : public ::testing::Test
{
  protected:
    lengthOfLastWordTest()
    {
    }

    ~lengthOfLastWordTest() override
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

TEST_F(lengthOfLastWordTest, Test_lengthOfLastWord)
{
    EXPECT_EQ(s.lengthOfLastWord("Hello World"), 5);
    EXPECT_EQ(s.lengthOfLastWord("Hello"), 5);
    EXPECT_EQ(s.lengthOfLastWord("a "), 1);
    EXPECT_EQ(s.lengthOfLastWord("  "), 0);
}

} // namespace
