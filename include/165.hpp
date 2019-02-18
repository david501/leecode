#include "common.h"

class Solution {
public:
  int compareVersion(string version1, string version2) {
    auto getVersionNum = [](const string &version, int &last) -> int {
      int num = 0;
      if (last < version.size()) {
        int found = version.find('.', last);
        if (found != string::npos) {
          num = atoi(version.substr(last, found - last).c_str());
          last = found + 1;
        } else {
          num = atoi(version.substr(last, version.size() - last).c_str());
          last = version.size();
        }
      }
      return num;
    };

    int l1{0}, l2{0};
    while (l1 < version1.size() || l2 < version2.size()) {
      int v1 = getVersionNum(version1, l1);
      int v2 = getVersionNum(version2, l2);
      if (v1 > v2)
        return 1;
      if (v1 < v2)
        return -1;
    }
    return 0;
  }
};