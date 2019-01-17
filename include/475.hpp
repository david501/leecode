class Solution
{
  public:
    int findRadius(vector<int> &houses, vector<int> &heaters)
    {
        int radius = 0;
        sort(heaters.begin(), heaters.end());

        for (const int house : houses)
        {
            int left = 0;
            int right = heaters.size() - 1;
            while (left < right)
            {
                int mid = left + (right - left) / 2;
                if (heaters[mid] < house)
                {
                    left = mid + 1;
                }
                else
                {
                    right = mid;
                }
            }
            const int r = (right) ? min(abs(heaters[right - 1] - house), abs(heaters[right] - house))
                                  : abs(heaters[right] - house);
            radius = max(radius, r);
        }

        return radius;
    }
};