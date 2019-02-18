class Solution {
public:
  int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
    long area = long(C - A) * (D - B) + long(G - E) * (H - F);

    auto overlap = [](int a, int b, int c, int d) -> int {
      if (a > c) {
        swap(a, c);
        swap(b, d);
      }

      if (c >= b)
        return 0;
      return min(b, d) - c;
    };

    long dx = overlap(A, C, E, G);
    long dy = overlap(B, D, F, H);
    return area - dx * dy;
  }
};