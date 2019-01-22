class Solution {
public:
  int countPrimeSetBits(int L, int R) {
    const int dict[16] = {
        0, 1, 1, 2, // 0,1,2,3
        1, 2, 2, 3, // 4,5,6,7
        1, 2, 2, 3, // 8,9,10,11
        2, 3, 3, 4  // 12,13,14,15
    };
    const int prime[20] = {
        0, 0, 1, 1, // 0,1,2,3
        0, 1, 0, 1, // 4,5,6,7
        0, 0, 0, 1, // 8,9,10,11
        0, 1, 0, 0, // 12,13,14,15
        0, 1, 0, 1, // 16,17,18,19
        0           // 20
    };

    int count = 0;
    for (int n = L; n <= R; ++n) {
      int m = n;
      int bits = 0;
      while (m) {
        bits += dict[m & 0x0F];
        m = m >> 4;
      }
      count += prime[bits];
    }
    return count;
  }
};