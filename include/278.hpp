// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution
{
  public:
    int firstBadVersion(int n)
    {
        int left = 1;
        int right = n;

        while (left < right)
        {
            int64_t mid = left + ((right - left) >> 1);
            if (isBadVersion(mid))
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }
        return left;
    }
};