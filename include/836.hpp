class Solution {
public:
  bool isRectangleOverlap(vector<int> &rec1, vector<int> &rec2) {
    auto isLineOverlap = [](int x11, int x12, int x21, int x22) -> bool {
      if (x11 == x12 || x21 == x22)
        return false;
      if (x11 > x12)
        swap(x11, x12);
      if (x21 > x22)
        swap(x21, x22);

      if (x11 == x21 || x12==x22)
        return true;
      return (x21 < x11 && x11 < x22) || (x21 < x12 && x12 < x22) ||
             (x11 < x21 && x21 < x12) || (x11 < x22 && x22 < x12);
    };

    return isLineOverlap(rec1[0], rec1[2], rec2[0], rec2[2]) &&
           isLineOverlap(rec1[1], rec1[3], rec2[1], rec2[3]);
  }
};