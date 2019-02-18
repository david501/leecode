class Solution {
public:
  void reverseWords(string &s) {
    const int n = s.size();
    for (int i = 0; i < n / 2; ++i) {
      swap(s[i], s[n - 1 - i]);
    }

    int r{0}, k{0};
    while (r < n) {
      while (r < n && s[r] == ' ')
        ++r;
      int l = r;
      while (r < n && s[r] != ' ')
        ++r;
      if (l >= n)
        break;

      for (int i = 0; i < (r - l) / 2; ++i)
        swap(s[l + i], s[r - 1 - i]);

      if (k)
        s[k++] = ' ';
      if (k != l) {
        for (int i = l; i < r; ++i)
          s[k++] = s[i];
      } else {
        k = r;
      }
    }
    s.resize(k);
  }

  // void reverseWords(string &s) {
  //   const int n = s.size();
  //   string res(n, ' ');

  //   int l{n - 1}, k{0};
  //   while (l >= 0) {
  //     while (l >= 0 && s[l] == ' ')
  //       --l;
  //     int r = l;
  //     while (l >= 0 && s[l] != ' ')
  //       --l;
  //     if (r < 0)
  //       break;

  //     if (k)
  //       ++k;
  //     for (int i = l + 1; i <= r; ++i)
  //       res[k++] = s[i];
  //   }
  //   res.resize(k);
  //   swap(s, res);
  // }
};