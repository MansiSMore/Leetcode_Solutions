#844.Backspace String Compare
'''
Input: S = "ab#c", T = "ad#c"
Output: true
Explanation: Both S and T become "ac".

Input: S = "a#c", T = "b"
Output: false
Explanation: S becomes "c" while T becomes "b".
'''

class Solution:
    def backspaceCompare(self, S: str, T: str) -> bool:
        
        while '#' in S :
            i = S.index('#')
            if i == 0 :
                S = S[i+1:]
            else:
                S = S[:i-1] + S[i+1:]
        
        while '#' in T :
            i = T.index('#')
            if i == 0 :
                T = T[i+1:]
            else:
                T = T[:i-1] + T[i+1:]
        
        if S == T :
            return True
        else:
            return False
