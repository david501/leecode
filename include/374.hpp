// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution
{
  public:
    int guessNumber(int n)
    {
        int left = 0, right = n;
        while (left < right)
        {
            const int mid = left + (right - left) / 2;
            const int r = guess(mid);
            if (r == 0)
                return mid;
            if (r == -1)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return left;
    }
};