#include "232.hpp"
#include <gtest/gtest.h>

namespace
{
TEST(MyQueueTest, TestMyQueue)
{
    MyQueue MyQueue;

    EXPECT_EQ(MyQueue.empty(), true);
    MyQueue.push(1);
    EXPECT_EQ(MyQueue.empty(), false);
    EXPECT_EQ(MyQueue.peek(), 1);
    MyQueue.push(2);
    EXPECT_EQ(MyQueue.empty(), false);
    EXPECT_EQ(MyQueue.peek(), 1);

    EXPECT_EQ(MyQueue.pop(), 1);
    EXPECT_EQ(MyQueue.peek(), 2);
    EXPECT_EQ(MyQueue.pop(), 2);
    EXPECT_EQ(MyQueue.empty(), true);
}

} // namespace