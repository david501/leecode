class Solution {
public:
  vector<int> sortArrayByParity(vector<int> &A) {
    vector<int> vec(A.size());
    int even{0}, odd{A.size() - 1};
    for (int n : A)
      vec[(n & 1) ? odd-- : even++] = n;

    return vec;
  }
};