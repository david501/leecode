class KthLargest {
public:
  KthLargest(int k, vector<int> nums) : mk(k), pq(nums.begin(), nums.end()) {}

  int add(int val) {
    pq.push(val);
    while (pq.size() > mk)
      pq.pop();
    return pq.top();
  }

private:
  int mk;
  priority_queue<int, vector<int>, greater<int>> pq;
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest obj = new KthLargest(k, nums);
 * int param_1 = obj.add(val);
 */