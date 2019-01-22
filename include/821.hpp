class Solution {
public:
  vector<int> shortestToChar(string S, char C) {
    vector<int> res(S.size());
    int dist = -1;
    for (int index = 0; index < S.size(); ++index) {
      if (S[index] != C) {
        res[index] = (dist >= 0) ? dist++ : INT_MAX;
      } else {
        dist = 1;
        res[index] = 0;
      }
    }

    dist = -1;
    for (int index = S.size() - 1; index >= 0; --index) {
      if (S[index] != C) {
        const int d = (dist >= 0) ? dist++ : INT_MAX;
        res[index] = min(res[index], d);

      } else {
        dist = 1;
      }
    }

    return res;
  }
};