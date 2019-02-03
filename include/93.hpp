class Solution {
public:
  vector<string> restoreIpAddresses(string s) {
    vector<string> res;
    const int n = s.size();

    vector<string> ip{4};
    function<void(int, int)> dfs = [&](int ns, int nip) {
      if (ns == n && nip == 4) {
        res.push_back(ip[0] + "." + ip[1] + "." + ip[2] + "." + ip[3]);
        return;
      }

      int last = -1;
      for (int i = ns + 1; i <= min(n, ns + 3) && nip < 4; ++i) {
        ip[nip] = s.substr(ns, i - ns);
        int k = atoi(ip[nip].c_str());
        if (ip[nip].size() > 1 && s[ns] == '0')
          return;
        if (k >= 0 && k <= 255 && k != last) {
          dfs(i, nip + 1);
          last = k;
        }
      }
    };

    dfs(0, 0);
    return res;
  }
};