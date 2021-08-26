/*
Given a string s, reverse only all the vowels in the string and return it.
The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both cases.

Example 1:
Input: s = "hello"
Output: "holle"

Example 2:
Input: s = "leetcode"
Output: "leotcede"

Constraints:
1 <= s.length <= 3 * 105
s consist of printable ASCII characters.

*/
class Solution {
public:
    int isVowel(char ch)
    {
        int check = 0;
        switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            check = 1;
        }
        return check;
    }
    
    string reverseVowels(string s) 
    {
        string ans;
        int i = 0, j = s.length() - 1;
        
        while(i < j)
        {
            if(isVowel(s[i]) == 1 and isVowel(s[j]) == 1)
            {
                char ch = s[i];
                s[i] = s[j];
                s[j] = ch;
                i++, j--;
            }
            else if(isVowel(s[i]) == 1 and isVowel(s[j]) != 1)
                j--;
            else if(isVowel(s[i]) != 1 and isVowel(s[j]) == 1)
                i++;
            else
                i++, j--;
        }
        
        return s;
    }
};
