class Solution {
public:
  int maxDistToClosest(vector<int> &seats) {
    int left = 0, right = seats.size();
    int max_count = 0;
    int last = -1;
    for (int i = 0; i < seats.size(); ++i) {
      const int seat = seats[i];
      if (seat) {
        if (last == -1) {
          left = i;
        } else {
          const int n = i - last - 1;
          if (n > max_count)
            max_count = n;
        }
        right = seats.size() - 1 - i;
        last = i;
      }
    }
    return max(left, max(right, (max_count + 1) / 2));
  }
};