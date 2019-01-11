class Solution
{
  public:
    bool isPowerOfFour(int num)
    {
        constexpr int mask = 0x55555555;
        return num > 0 && ((num & (num - 1)) == 0) && (mask & num) != 0;
    }
};