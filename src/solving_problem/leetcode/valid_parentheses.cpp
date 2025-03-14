#include <iostream>
#include <stack>

using namespace std;

// https://leetcode.com/problems/valid-parentheses
/*
        - Description:
        Given a string s containing just the characters '(', ')', '{', '}', '['
   and ']', determine if the input string is valid. An input string is valid if:
        1. Open brackets must be closed by the same type of brackets.
        2. Open brackets must be closed in the correct order.
        3. Every close bracket has a corresponding open bracket of the same
   type.

        - Constraints:
        1 <= s.length <= 104
        s consists of parentheses only '()[]{}'

*/

class Solution {
public:
  bool isValid_01(string s);
};

bool Solution::isValid_01(string s) {}
