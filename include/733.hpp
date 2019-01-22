class Solution {
public:
  vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc,
                                int newColor) {
    const int oldColor = image[sr][sc];
    if (oldColor == newColor)
      return image;
    const int rows = image.size();
    const int cols = image[0].size();

    queue<pair<int, int>> q;
    q.push(make_pair(sr, sc));
    while (!q.empty()) {
      const auto cur = q.front();
      const auto r = cur.first;
      const auto c = cur.second;
      q.pop();

      if (image[r][c] != oldColor)
        continue;
      image[r][c] = newColor;
      if (r + 1 < rows && iamge[r + 1][c] == oldColor)
        q.push(make_pair(r + 1, c));
      if (r >= 1 && iamge[r - 1][c] == oldColor)
        q.push(make_pair(r - 1, c));
      if (c + 1 < cols && iamge[r][c + 1] == oldColor)
        q.push(make_pair(r, c + 1));
      if (c >= 1 && iamge[r][c - 1] == oldColor)
        q.push(make_pair(r, c - 1));
    }
  }
};