class Solution {
public:
  vector<int> grayCode(int n) {
    if (n == 0)
      return {0};
    if (n == 1)
      return {0, 1};

    auto vec = grayCode(n - 1);
    const int k = vec.size();
    vec.reserve(k+k);
    const int m = 1 << (n - 1);
    for (int i = 0; i < k; ++i) {
      vec.push_back(vec[k - 1 - i] + m);
    }
    return vec;
  }
};