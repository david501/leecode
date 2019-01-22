class Solution {
public:
  int uniqueMorseRepresentations(vector<string> &words) {
    vector<string> morse{".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",
                         "....", "..",   ".---", "-.-",  ".-..", "--",   "-.",
                         "---",  ".--.", "--.-", ".-.",  "...",  "-",    "..-",
                         "...-", ".--",  "-..-", "-.--", "--.."};

    set<string> unique;

    for (auto word : words) {
      string s;
      for (char c : word) {
        s += morse[c - 'a'];
      }
      unique.insert(s);
    }
    return unique.size();
  }
};