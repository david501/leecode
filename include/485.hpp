class Solution
{
  public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int global = 0;
        int local = 0;
        for (int i : nums)
        {
            if (i)
            {
                ++local;
                if (local > global)
                    global = local;
            }
            else
                local = 0;
        }
        return global;
    }
};
