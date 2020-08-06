'''
Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Note: For the purpose of this problem, we define empty string as valid palindrome.

Example 1:

Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:

Input: "race a car"
Output: false
'''
class Solution:
    def isPalindrome(self,s):
        if(s == ""):
            return True
        s = ''.join(e for e in s if e.isalnum())
        s = s.lower()
        i = 0
        j = len(s)-1
        while(i < j):
            if s[i] == s[j]:
                i = i +1
                j = j -1
            else:
                return False
        return True