class Solution {
public:
  vector<string> findRestaurant(vector<string> &list1, vector<string> &list2) {
    map<string, int> map1;
    for (int i = 0; i < list1.size(); ++i)
      map1[list1[i]] = i;

    vector<string> res;
    int min_index = INT_MAX;
    for (int i = 0; i < list2.size() && i <= min_index; ++i) {
      if (map1.count(list2[i])) {
        int sum = map1[list2[i]] + i;
        if (sum < min_index) {
          min_index = sum;
          res.clear();
          res.push_back(list2[i]);
        } else if (sum == min_index)
          res.push_back(list2[i]);
      }
    }
    return res;
  }
};