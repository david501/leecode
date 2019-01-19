class Solution {
public:
  bool canPlaceFlowers(vector<int> &flowerbed, int n) {
    int count = 0;
    int space = 1;
    for (int f : flowerbed) {
      if (f == 0)
        ++space;
      else {
        if (space) {
          count += (space - 1) / 2;
          if (count >= n)
            return true;
        }

        space = 0;
      }
    }
    count += space / 2;
    return count >= n;
  }
};