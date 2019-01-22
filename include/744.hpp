class Solution {
public:
  char nextGreatestLetter(vector<char> &letters, char target) {
    int left = 0;
    int right = letters.size() - 1;
    while (left < right) {
      int mid = left + (right - left) / 2;
      if (letters[mid] == target)
        break;
      if (letters[mid] < target)
        left = mid + 1;
      else
        right = mid;
    }
    for (int i = left; i < letters.size(); ++i)
      if (letters[i] > target)
        return letters[i];
    return letters[0];
  }
};