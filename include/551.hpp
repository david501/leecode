class Solution {
public:
  bool checkRecord(string s) {
    int total_absent = 0, continuous_late = 0;
    for (char c : s) {
      switch (c) {
      case 'P':
        continuous_late = 0;
        break;
      case 'A':
        ++total_absent;
        continuous_late = 0;
        break;
      case 'L':
        ++continuous_late;
        break;
      }
      if (total_absent > 1 || continuous_late > 2)
        return false;
    }
    return true;
  }
};