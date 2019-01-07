#include <vector>
using std::vector;

class Solution
{
  public:
    vector<int> plusOne(vector<int> &digits)
    {
        const int len = digits.size();
        vector<int> result;
        result.reserve(len + 1);
        result.resize(len);

        int carry = 1;
        for (int i = len - 1; i >= 0; --i)
        {
            int cur = digits[i] + carry;
            if (cur < 10)
            {
                result[i] = cur;
                carry = 0;
            }
            else
            {
                result[i] = cur - 10;
                carry = 1;
            }
        }
        if (carry == 1)
        {
            result.insert(result.begin(), 1);
        }

        return result;
    }
};