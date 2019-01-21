class Solution {
public:
  bool isOneBitCharacter(vector<int> &bits) {
    const last = bits.size() - 1;
    int i = 0;
    for (; i < last; ++i) {
      if (bits[i] == 1)
        ++i;
    }
    return i == last;
  }
};