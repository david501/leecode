class Solution
{
  public:
    int countSegments(string s)
    {
        int count = 0;
        
        bool space = false;
        for (const char c : s)
        {
            if (c == ' ')
            {
                if (space)
                    continue;
                space = true;
            }
            else
            {
                if (space)
                {
                    ++count;
                    space = false;
                }
            }
        }
        return count;
    }
};