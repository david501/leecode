#include "common.h"

class MyStack
{
  public:
    /** Initialize your data structure here. */
    MyStack()
    {
    }

    /** Push element x onto stack. */
    void push(int x)
    {
        mQueue.push(x);
        mTop = x;
    }

    /** Removes the element on top of the stack and returns that element. */
    int pop()
    {
        const int size = mQueue.size();
        const int top_ = top();
        for (int i = 1; i < size; ++i)
        {
            push(mQueue.front());
            mQueue.pop();
        }
        mQueue.pop();

        return top_;
    }

    /** Get the top element. */
    int top()
    {
        return mTop;
    }

    /** Returns whether the stack is empty. */
    bool empty()
    {
        return mQueue.empty();
    }

  private:
    queue<int> mQueue;
    int mTop;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */