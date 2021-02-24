/*
Given a balanced parentheses string S, compute the score of the string based on the following rule:
() has score 1
AB has score A + B, where A and B are balanced parentheses strings.
(A) has score 2 * A, where A is a balanced parentheses string.

Example 1:
Input: "()"
Output: 1

Example 2:
Input: "(())"
Output: 2

Example 3:
Input: "()()"
Output: 2

Example 4:
Input: "(()(()))"
Output: 6

Note:
S is a balanced parentheses string, containing only ( and ).
2 <= S.length <= 50

*/
class Solution {
public:
    int scoreOfParentheses(string S) 
    {
        int cnt1 = 0, cnt2 = 0;
        
        for(int i = 1; i < S.size(); i++)
        {
            if (S[i] == '(')
                cnt1++;
            else if(S[i-1] == '(')
                cnt2 += 1 << cnt1--;
            else cnt1--;
        }
        
        return cnt2;
    }
};
