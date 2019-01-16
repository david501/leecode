class Solution
{
  public:
    int arrangeCoins(int n)
    {
        int left = 0;
        int right = n;
        while (left < right)
        {
            const int mid = left + (right - left) / 2;
            const int mid2 = 2.0 * n / (mid + 1);
            if (mid <= mid2 && mid2 < mid + 2)
                return mid;
            if (mid2 < mid)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return left;
    }
};