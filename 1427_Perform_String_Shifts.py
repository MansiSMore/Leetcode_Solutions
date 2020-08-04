#1427. Perform String Shifts
'''
Example :
Input: s = "abc", shift = [[0,1],[1,2]]
Output: "cab"
Explanation: 
[0,1] means shift to left by 1. "abc" -> "bca"
[1,2] means shift to right by 2. "bca" -> "cab"

Example 2:
Input: s = "abcdefg", shift = [[1,1],[1,1],[0,2],[1,3]]
Output: "efgabcd"
Explanation:  
[1,1] means shift to right by 1. "abcdefg" -> "gabcdef"
[1,1] means shift to right by 1. "gabcdef" -> "fgabcde"
[0,2] means shift to left by 2. "fgabcde" -> "abcdefg"
[1,3] means shift to right by 3. "abcdefg" -> "efgabcd"

'''

class Solution:
    def stringShift(self, s: str, shift: List[List[int]]) -> str:
        
        left = 0; right = 0; j = 0 ; k = 0 
        
        for i in shift:
            if i[0] == 0:
                left = left + i[1]
            else:
                right = right + i[1]
        j = right - left
        
        l = list(s)
        
        while k != j:
            #left shift
            if j < 0:
                ch = l.pop(0)
                l.append(ch)
                j += 1
 
            #right shift
            elif j > 0:
                ch = l.pop(-1)
                l.insert(0,ch)
                j -= 1
            #no shifting
        
        
        return ("".join(l))
                
            
