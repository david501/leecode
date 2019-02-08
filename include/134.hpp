class Solution {
public:
  int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
    const int n = gas.size();
    int lowest = INT_MAX;
    int index;
    int sum = 0;
    for (int i = 0; i < n; ++) {
      sum += gas[i] - cost[i];
      if (sum < lowest) {
        lowest = sum;
        index = i;
      }
    }

    return sum >= 0 ? (index + 1) % n : -1;
  }
};