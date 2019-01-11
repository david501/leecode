#include "common.h"

class Solution {
public:
    string reverseString(string s) {
        return {s.rbegin(),s.rend()};
    }
};