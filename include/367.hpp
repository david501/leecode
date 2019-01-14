class Solution
{
  public:
    bool isPerfectSquare(int num)
    {
        int left = 0;
        int right = num;
        while (left < right)
        {
            const int mid = left + (right - left) / 2;
            const int num_div_mid = (mid) ? num / mid : num;
            if (num_div_mid == mid)
            {
                left = mid;
                break;
            }
            if (num_div_mid < mid)
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }
        return left * left == num;
    }
};