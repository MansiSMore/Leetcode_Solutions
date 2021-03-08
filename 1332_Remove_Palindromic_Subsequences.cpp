/*
Given a string s consisting only of letters 'a' and 'b'. In a single step you can remove one palindromic subsequence from s.
Return the minimum number of steps to make the given string empty.
A string is a subsequence of a given string, if it is generated by deleting some characters of a given string without changing its order.
A string is called palindrome if is one that reads the same backward as well as forward.

Example 1:
Input: s = "ababa"
Output: 1
Explanation: String is already palindrome

Example 2:
Input: s = "abb"
Output: 2
Explanation: "abb" -> "bb" -> "". 
Remove palindromic subsequence "a" then "bb".

Example 3:
Input: s = "baabb"
Output: 2
Explanation: "baabb" -> "b" -> "". 
Remove palindromic subsequence "baab" then "b".

Example 4:
Input: s = ""
Output: 0

Constraints:
0 <= s.length <= 1000
s only consists of letters 'a' and 'b'

*/
class Solution {
public:
    int removePalindromeSub(string s) 
    {
        if(s.size() == 0) 
            return 0;
        
        string rev = s;
        
        reverse(rev.begin(), rev.end());
        if(s == rev)
            return 1;
        return 2;
    }
};
