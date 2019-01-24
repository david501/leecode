class Solution {
public:
  bool validMountainArray(vector<int> &A) {
    if (A.size() < 3 || A[0] > A[1])
      return false;

    bool inc = true;
    for (int i = 2; i < A.size(); ++i) {
      if (A[i - 1] == A[i])
        return false;

      if (A[i - 1] < A[i]) {
        if (!inc)
          return false;
      } else
        inc = false;
    }
    return !inc;
  }
};