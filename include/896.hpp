class Solution {
public:
  bool isMonotonic(vector<int> &A) {
    bool inc = false;
    bool dec = false;
    for (int i = 1; i < A.size(); ++i) {
      if (A[i - 1] == A[i])
        continue;
        
      if (A[i - 1] < A[i])
        inc = true;
      else
        dec = true;

      if (inc && dec)
        return false;
    }
    return true;
  }
};