class Solution {
public:
  string toGoatLatin(string S) {
    set<char> vowel{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    istringstream in(S);
    string goat_latin;
    string suffix = "maa";
    for (string word; in >> word;) {
      if (!vowel.count(word[0])) {
        word = word.substr(1, word.size() - 1) + word.substr(0, 1);
      }
      if (goat_latin.size())
        goat_latin += " ";
      goat_latin += word + suffix;
      suffix += "a";
    }
    return goat_latin;
  }
};