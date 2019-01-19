// Given a string, you need to reverse the order of characters in each word
// within a sentence while still preserving whitespace and initial word order.

// Example 1:

// Input: "Let's take LeetCode contest"
// Output: "s'teL ekat edoCteeL tsetnoc"

// Note: In the string, each word is separated by single space and there will
// not be any extra space in the string.

#include "common.h"

class Solution {
public:
  string reverseWords(string s) {
    string res;
    istringstream in(s);
    for (string word; in>>word;) {
        if(res.size())
          res += " ";
        res += {word.rbegin(), word.rend()};
    }
    return res;
  }
};