/*
Given a string s and an integer k, reverse the first k characters for every 2k characters counting from the start of the string.
If there are fewer than k characters left, reverse all of them. If there are less than 2k but greater than or equal to k characters, 
then reverse the first k characters and left the other as original.

Example 1:
Input: s = "abcdefg", k = 2
Output: "bacdfeg"

Example 2:
Input: s = "abcd", k = 2
Output: "bacd"

Constraints:
1 <= s.length <= 104
s consists of only lowercase English letters.
1 <= k <= 104

*/
#include <algorithm>
using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) 
    {
        int i = 0, len = s.length();
        while(i < len)
        {
            int j = min<int>(i + k - 1, s.length() - 1);
            int p = i, q = j;
            while(p < q)
            {
                char t = s[p];
                s[p] = s[q];
                s[q] = t;
                p++;
                q--;
            }
            i += 2 * k;
            j = j + k;
        }
        return s;
        
    }
};
