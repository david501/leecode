class Solution
{
  public:
    int getSum(int a, int b)
    {
        int r = a ^ b;
        int carry = a & b;
        while (carry)
        {
            const int rr = r;
            carry = carry << 1;
            r ^= carry;
            carry &= rr;
        }

        return r;
    }
};
