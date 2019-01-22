class Solution {
public:
  int networkDelayTime(vector<vector<int>> &times, int N, int K) {
    vector<vector<vector<int> *>> edges(N + 1);
    for (auto &t : times) {
      edges[t[0]].push_back(&t);
    }

    vector<int> min_time(N, INT_MAX);
    queue<pair<int, int>> q;
    q.push(make_pair(K, 0));
    while (!q.empty()) {
      const auto pt = q.front();
      q.pop();

      const int u = pt.first;
      const int t = pt.second;
      if (t >= min_time[u - 1])
        continue;
      min_time[u - 1] = t;

      for (auto p : edges[u]) {
        const int v = (*p)[1];
        const int dt = (*p)[2];
        const int cur_time = t + dt;
        q.push(make_pair(v, cur_time));
      }
    }

    int longest_time = 0;
    for (auto t : min_time) {
      if (t == INT_MAX)
        return -1;
      if (t > longest_time)
        longest_time = t;
    }
    return longest_time;
  }
};