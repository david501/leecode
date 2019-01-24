class Solution {
public:
  int numUniqueEmails(vector<string> &emails) {
    set<string> emails_set;

    for (auto &email : emails) {
      const auto found_at = email.find("@", 0);
      const auto found_plus = email.find("+", 0);

      const auto pos_localname =
          (found_plus != string::npos && found_plus < found_at) ? found_plus
                                                                : found_at;
      string localname;
      for (char c : email.substr(0, pos_localname)) {
        if (c != '.')
          localname += string(1, c);
      }

      emails_set.insert(localname +
                        email.substr(found_at, email.size() - found_at));
    }

    return emails_set.size();
  }
};