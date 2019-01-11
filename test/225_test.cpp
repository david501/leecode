#include "225.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(MyStackTest, TestMyStack)
{
    MyStack myStack;
    
    EXPECT_EQ(myStack.empty(), true);
    myStack.push(1);
    EXPECT_EQ(myStack.empty(), false);
    EXPECT_EQ(myStack.top(), 1);
    myStack.push(2);
    EXPECT_EQ(myStack.empty(), false);
    EXPECT_EQ(myStack.top(), 2);

    EXPECT_EQ(myStack.pop(), 2);
    EXPECT_EQ(myStack.top(), 1);
    EXPECT_EQ(myStack.pop(), 1);
    EXPECT_EQ(myStack.empty(), true);
}

} // namespace
