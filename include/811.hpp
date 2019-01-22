class Solution {
public:
  vector<string> subdomainVisits(vector<string> &cpdomains) {
    vector<string> result;
    map<string, int> freq;

    for (auto cpdomain : cpdomains) {
      const int len = cpdomain.size();
      int found = cpdomain.find(" ", 0);
      int count = atoi(cpdomain.substr(0, found).c_str());

      string domain = cpdomain.substr(found + 1, len - 1 - found);
      freq[domain] += count;
      while ((found = cpdomain.find(".", found + 1)) != string::npos) {
        freq[cpdomain.substr(found + 1, len - 1 - found)] += count;
      }
    }
    for (auto it : freq) {
      result.push_back(to_string(it.second) + " " + it.first);
    }
    return result;
  }
};