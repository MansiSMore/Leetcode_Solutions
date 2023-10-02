/*
Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

Example 1:
Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"

Example 2:
Input: s = "God Ding"
Output: "doG gniD"

Constraints:
1 <= s.length <= 5 * 104
s contains printable ASCII characters.
s does not contain any leading or trailing spaces.
There is at least one word in s.
All the words in s are separated by a single space.

*/
class Solution {
public:
    string reverseWords(string s) 
    {
        istringstream stream(s);
        string str, res;
        
        while (stream >> str) 
        {
            reverse(str.begin(), str.end());
            res += str + " ";
        }
        //for removing extra white space at last.
        res.pop_back();
        
        return res;
    }
};


//method 2 : Two pointer approach 

class Solution {
public:
    string reverseWords(string s) 
    {
        //two pointer approach 
        int i = 0;
        for(int j = 0; j < s.length(); j++)
        {
            //traversec j till you found ' '
            if(s[j] == ' ')
            {
                //reverse string from s[i] to s[j]
                reverse(s.begin() + i, s.begin() + j);
                //now update i to non white space character.
                i = j + 1;
            }
        }
        //for last string.
        reverse(s.begin() + i, s.end());
        return s;
    }
};
