/*
Given a string, your task is to count how many palindromic substrings in this string.
The substrings with different start indexes or end indexes are counted as different substrings even they consist of same characters.

Example 1:
Input: "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".

Example 2:
Input: "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".

Note:
The input string length won't exceed 1000.
*/

class Solution 
{
    bool checkPalindrome(string& str, int i, int j) 
    {
        while(i < j) 
        {
            if(str[i] != str[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    
 public:
    int countSubstrings(string s) 
    {
        int cnt = 0;

        for(int i = 0; i < s.size(); i++)
            for(int j = i; j < s.size(); j++)
                cnt += checkPalindrome(s, i, j);
        return cnt;
    }
};
