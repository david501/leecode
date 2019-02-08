/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
class Solution {
public:
  UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
    if (!node)
      return nullptr;

    queue<UndirectedGraphNode *> q;
    q.push(node);
    unordered_map<UndirectedGraphNode *, UndirectedGraphNode *> node2clone;
    node2clone[node] = new UndirectedGraphNode(node->label);

    while (!q.empty()) {
      auto node = q.front();
      q.pop();

      auto clone = node2clone[node];
      for (auto p : node->neighbors) {
        if (node2clone.count(p)) {
          clone->neighbors.push_back(node2clone[p]);
        } else {
          auto np = new UndirectedGraphNode(p->label);
          clone->neighbors.push_back(np);
          node2clone[p] = np;
          q.push(p);
        }
      }
    }
    return node2clone[node];
  }
};