class Solution {
public:
  vector<int> fairCandySwap(vector<int> &A, vector<int> &B) {
    set<int> sa{A.begin(), A.end()};
    int sum_a = 0, sum_b = 0;
    for (int a : A)
      sum_a += a;
    for (int b : B)
      sum_b += b;

    const int delta = (sum_a - sum_b) / 2;
    for (int b : B) {
      if (sa.count(b - delta)) {
        return {b - delta, b};
      }
    }
    return {};
  }
};