class Solution {
public:
  vector<int> sortArrayByParityII(vector<int> &A) {
    int even{0}, odd{A.size() - 1};
    while (even < (A.size() - 1) && odd > 0) {
      if ((A[even] & 1) == 0) {
        even += 2;
        continue;
      }
      if ((A[odd] & 1) == 1) {
        odd -= 2;
        continue;
      }
      swap(A[even], A[odd]);
      even += 2;
      odd -= 2;
    }
    return A;
  }
};