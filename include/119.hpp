#include <vector>

using namespace std;

class Solution
{
  public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> v, result;
        v.resize(rowIndex + 1);
        result.resize(rowIndex + 1);
        result[0] = 1;
        for (int i = 1; i <= rowIndex; ++i)
        {
            v[0] = v[i] = 1;
            for (int j = 1; j < i; ++j)
            {
                v[j] = result[j - 1] + result[j];
            }
            result.swap(v);
        }
        return result;
    }
};