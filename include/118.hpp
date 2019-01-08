#include <vector>

using namespace std;

class Solution
{
  public:
    vector<vector<int>> generate(int numRows)
    {
        if (numRows == 0)
            return {};

        vector<vector<int>> result;
        result.reserve(numRows);
        result.push_back({1});

        for (int i = 1; i < numRows; ++i)
        {
            const vector<int> &last = result[i - 1];
            vector<int> v;
            v.resize(i + 1);
            v[0] = v[i] = 1;
            for (int j = 1; j < i; ++j)
            {
                v[j] = last[j - 1] + last[j];
            }
            result.push_back(v);
        }
        return result;
    }
};