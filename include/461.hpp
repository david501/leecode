class Solution
{
  public:
    int hammingDistance(int x, int y)
    {
        int hamming = 0;
        x ^= y;
        while (x)
        {
            ++hamming;
            x &= x - 1;
        }
        return hamming;
    }
};