#include "common.h"

class MyQueue
{
  public:
    /** Initialize your data structure here. */
    MyQueue()
    {
    }

    /** Push element x to the back of queue. */
    void push(int x)
    {
        stack<int> temp;
        while (!mStack.empty())
        {
            temp.push(mStack.top());
            mStack.pop();
        }
        mStack.push(x);
        while (!temp.empty())
        {
            mStack.push(temp.top());
            temp.pop();
        }
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop()
    {
        auto temp = mStack.top();
        mStack.pop();
        return temp;
    }

    /** Get the front element. */
    int peek()
    {
        return mStack.top();
    }

    /** Returns whether the queue is empty. */
    bool empty()
    {
        return mStack.empty();
    }

  private:
    stack<int> mStack;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */