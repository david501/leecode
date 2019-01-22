class Solution {
public:
  bool lemonadeChange(vector<int> &bills) {
    int five{0}, ten{0};
    for (int bill : bills) {
      switch (bill) {
      case 5:
        ++five;
        break;
      case 10:
        if (five) {
          --five;
          ++ten;
          break;
        }
        return false;
      case 20:
        if (ten && five) {
          --ten;
          --five;
          break;
        } else if (five >= 3) {
          five -= 3;
          break;
        }
        return false;
      }
    }
    return true;
  }
};