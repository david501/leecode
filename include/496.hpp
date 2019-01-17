class Solution
{
  public:
    vector<int> nextGreaterElement(vector<int> &findNums, vector<int> &nums)
    {
        map<int, int> next_greater;
        set<int> no_greater;
        for (int i = 0; i < nums.size(); ++i)
        {
            const int n = nums[i];
            auto it = no_greater.begin();
            for (;it != no_greater.end(); ++it)
            {
                if (n <= *it)
                    break;

                next_greater[*it] = n;
            }
            no_greater.erase(no_greater.begin(), it);
            no_greater.insert(n);
        }
        for (const int m : no_greater)
        {
            next_greater[m] = -1;
        }

        vector<int> result;
        result.reserve(findNums.size());
        for (const int n : findNums)
        {
            result.push_back(next_greater[n]);
        }
        return result;
    }
};
