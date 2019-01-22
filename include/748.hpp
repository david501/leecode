class Solution {
public:
  string shortestCompletingWord(string licensePlate, vector<string> &words) {
    map<char, int> plate;
    for (char c : licensePlate)
      if (isalpha(c))
        ++plate[tolower(c) - 'a'];

    bool found = false;
    string res;
    for (auto word : words) {
      if (found && word.size() >= res.size())
        continue;

      array<int, 26> freq;
      for (char c : word)
        ++freq[c - 'a'];

      bool success = true;
      for (auto &it : plate) {
        if (freq[it.first] < it.second) {
          success = false;
          break;
        }
      }
      if (success) {
        found = true;
        res = word;
      }
    }
    return res;
  }
};