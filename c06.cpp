/*20. Valid Parentheses

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 
Example 1:
Input: s = "()"
Output: true

Example 2:
Input: s = "()[]{}"
Output: true

Example 3:
Input: s = "(]"
Output: false

Example 4:
Input: s = "([])"
Output: true

Example 5:
Input: s = "([)]"
Output: false

*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> store;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                store.push(s[i]);
            }
            else {
                if (store.empty())
                    return false;
                if ((s[i] == ')' && store.top() == '(') ||
                    (s[i] == ']' && store.top() == '[') ||
                    (s[i] == '}' && store.top() == '{')) {
                    store.pop();
                }
                else {
                    return false;
                }
            }
        }
        return store.empty();
    }
};
