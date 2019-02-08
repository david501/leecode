class Solution {
public:
  int ladderLength(string beginWord, string endWord, vector<string> &wordList) {
    unordered_set<string> dict(wordList.begin(), wordList.end());
    if (!dict.count(endWord))
      return 0;

    unordered_set<string> current{beginWord};
    unordered_set<string> target{endWord};
    const int word_length = beginWord.size();
    int steps{2};

    dict.erase(beginWord);
    while (!current.empty()) {
      if (current.size() > target.size())
        swap(current, target);

      unordered_set<string> next;
      for (string word : current) {
        for (int i = 0; i < word_length; ++i) {
          const char c = word[i];
          for (char a = 'a'; a <= 'z'; ++a) {
            word[i] = a;
            if (target.count(word))
              return steps;
            if (dict.count(word)) {
              next.insert(word);
              dict.erase(word);
            }
          }
          word[i] = c;
        }
      }
      ++steps;
      swap(current, next);
    }
    return 0;
  }

  int ladderLength_1(string beginWord, string endWord,
                     vector<string> &wordList) {
    const int len = beginWord.size();
    const int list_len = wordList.size();
    if (len < 2)
      return 2;

    int res = 0;
    unordered_set<string> match_set;
    vector<int> flag(wordList.size() + 1, 0);
    bool has_matched = true;

    function<bool(int)> isMatched = [&](int i) -> bool {
      string &word = wordList[i];
      for (int j = 0; j < len; ++j) {
        const char c = word[j];
        word[j] = ' ';

        if (match_set.count(word)) {
          word[j] = c;
          return true;
        }
        word[j] = c;
      }
      return false;
    };

    function<void(int)> helper = [&](int n) {
      for (int i = 0; i < wordList.size(); i++) {
        if (flag[i] == 0) {
          if (isMatched(i)) {
            if (wordList[i] == endWord) {
              res = n;
              return;
            }
            has_matched = true;
            flag[i] = n;
          }
        }
      }
    };

    int n = 1;
    wordList.push_back(beginWord);
    flag.back() = 1;
    while (!res && has_matched) {
      match_set.clear();
      for (int i = 0; i < wordList.size(); i++) {
        if (flag[i] == n) {
          string &word = wordList[i];
          for (int j = 0; j < len; ++j) {
            const char c = word[j];
            word[j] = ' ';
            match_set.insert(word);
            word[j] = c;
          }
        }
      }
      has_matched = false;
      helper(++n);
    }
    wordList.pop_back();
    return res;
  }
};