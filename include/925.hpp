class Solution {
public:
  bool isLongPressedName(string name, string typed) {
    if (name.size() == 0)
      return typed.size() == 0;

    int ni{0}, nt{0};
    for (; ni < name.size() && nt < typed.size(); ++nt) {
      if (typed[nt] == name[ni]) {
        ++ni;
        continue;
      }
      if (ni == 0)
        return false;
      if (typed[nt] == name[ni - 1]) {
        continue;
      } else
        return false;
    }

    if (ni == name.size() - 1)
      return false;

    while (nt < typed.size()) {
      if (typed[nt++] != name[name.size() - 1])
        return false;
    }
    return true;
  }
};