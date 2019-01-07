#include <string>
#include <stack>

using namespace std;

class Solution
{
  public:
    bool isValid(string s)
    {
        stack<char> theStack;
        for (const auto &c : s)
        {
            switch (c)
            {
            case '(':
                theStack.push(')');
                break;
            case '[':
                theStack.push(']');
                break;
            case '{':
                theStack.push('}');
                break;
            case ')':
            case ']':
            case '}':
                if (!theStack.empty() && c == theStack.top())
                {
                    theStack.pop();
                }
                else
                {
                    return false;
                }
                break;
            }
        }
        return theStack.empty();
    }
};