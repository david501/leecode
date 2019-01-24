class Solution {
public:
  vector<string> reorderLogFiles(vector<string> &logs) {
    vector<string> digit_logs;
    map<string, set<string>> letter_logs;
    string identifier, letter_log;

    auto is_letter_logs = [&](string log) -> bool {
      auto found = log.find(" ", 0);
      if (isalpha(log[found + 1])) {
        identifier = log.substr(0, found);
        letter_log = log.substr(found, log.size() - found);
        return true;
      }
      return false;
    };

    for (const string &log : logs) {
      if (is_letter_logs(log))
        letter_logs[letter_log].insert(identifier);
      else
        digit_logs.push_back(log);
    }

    vector<string> res(logs.size());
    int index = 0;
    for (const auto &log : letter_logs) {
      for (const auto &id : log.second) {
        res[index++] = id + log.first;
      }
    }
    copy(digit_logs.begin(), digit_logs.end(), res.begin() + index);

    return res;
  }
};