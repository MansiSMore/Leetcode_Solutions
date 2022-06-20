/*
Given a string s, sort it in decreasing order based on the frequency of the characters. 
The frequency of a character is the number of times it appears in the string.
Return the sorted string. If there are multiple answers, return any of them.

Example 1:
Input: s = "tree"
Output: "eert"
Explanation: 'e' appears twice while 'r' and 't' both appear once.
So 'e' must appear before both 'r' and 't'. Therefore "eetr" is also a valid answer.

Example 2:
Input: s = "cccaaa"
Output: "aaaccc"
Explanation: Both 'c' and 'a' appear three times, so both "cccaaa" and "aaaccc" are valid answers.
Note that "cacaca" is incorrect, as the same characters must be together.

Example 3:
Input: s = "Aabb"
Output: "bbAa"
Explanation: "bbaA" is also a valid answer, but "Aabb" is incorrect.
Note that 'A' and 'a' are treated as two different characters.

Constraints:
1 <= s.length <= 5 * 105
s consists of uppercase and lowercase English letters and digits.

*/
//For this question's explanation, refer que no 1636 from this repo : https://github.com/MansiSMore/Leetcode_Solutions/
bool cmp(pair<char, int>& a, pair<char, int>& b)
{
    return b.second < a.second;
}
class Solution {
public:
    string frequencySort(string s) 
    {
        unordered_map<char, int> uobj;
        for(int i = 0; i < s.length(); i++)
        {
            if(uobj[s[i]] == 0)
            {
                uobj[s[i]] = 1;
            }
            else
            {
                uobj[s[i]] += 1;
            }
        }
        
        vector<pair<char, int>> arr;
        
        for(auto& x : uobj)
        {
            arr.push_back(x);
            //cout << x.first << " " << x.second << endl;
        }
        
        sort(arr.begin(), arr.end(), cmp);
        
        string res;
        for(auto& x : arr)
        {
            for(int i = 0; i < x.second; i++)
            {
                res += x.first;
            }
            //cout << x.first << " " << x.second << endl;
        }
        return res;
    }
};
