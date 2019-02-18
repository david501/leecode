#include "common.h"

class Solution {
public:
  vector<string> findRepeatedDnaSequences(string s) {
    unordered_map<string, int> count;
    for (int i = 0; i < int(s.size()) - 9; ++i) {
      count[s.substr(i, 10)]++;
    }

    vector<string> res;
    for (auto &it : count) {
      if (it.second > 1)
        res.push_back(it.first);
    }

    return res;
  }

  // vector<string> findRepeatedDnaSequences(string s) {
  //   auto encode = [](char c) -> int {
  //     if (c == 'A')
  //       return 0;
  //     if (c == 'C')
  //       return 1;
  //     if (c == 'G')
  //       return 2;
  //     return 3;
  //   };

  //   char codes[4]={'A','C','G','T'};
  //   auto decode = [&](int code) -> string {
  //     string s(10, 'A');
  //     for (int i = 9; i >= 0; --i, code>>=2) {
  //       s[i]=codes[code&0x3];
  //     }
  //     return s;
  //   };

  //   map<int, int> count;
  //   for (int i = 0, code = 0; i < s.size(); ++i) {
  //     code = ((code << 2) + encode(s[i])) & 0x0FFFFF;
  //     if (i >= 9)
  //       count[code]++;
  //   }

  //   vector<string> res;
  //   for (auto &it : count) {
  //     if (it.second == 1)
  //       continue;
  //     res.emplace_back(decode(it.first));
  //   }

  //   return res;
  // }
};