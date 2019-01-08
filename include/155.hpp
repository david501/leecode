#include <vector>
using namespace std;

class MinStack
{
  public:
    /** initialize your data structure here. */
    MinStack()
    {
    }

    void push(int x)
    {
        if (stack.empty())
        {
            stack.push_back({x, x});
        }
        else
        {
            stack.push_back({x, min(getMin(), x)});
        }
    }

    void pop()
    {
        stack.pop_back();
    }

    int top()
    {
        return stack.back().first;
    }

    int getMin()
    {
        return stack.back().second;
    }

  private:
    vector<pair<int, int>> stack;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */