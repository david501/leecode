#include "common.h"
class Solution
{
  public:
    string reverseVowels(string s)
    {
        auto isVowel=[](char c) ->bool {
            static const set<char> vowels{'a', 'o', 'e', 'i', 'u', 'A', 'O', 'E', 'I', 'U'};
            return  vowels.find(c) != vowels.end();
        };

        int left = 0;
        int right = s.size() - 1;
        while (left < right)
        {
            while (left < right && !isVowel(s[left]))
                ++left;
            while (left < right && !isVowel(s[right]))
                --right;
            if (left < right) 
            {
                swap(s[left++], s[right--]);
            }
        }

        return s;
    }
};