#258. Add Digits
'''
Input: 38
Output: 2 
Explanation: The process is like: 3 + 8 = 11, 1 + 1 = 2. 
             Since 2 has only one digit, return it.
'''
class Solution:
    def addDigits(self, num: int) -> int:
        return (0 if num == 0 else (num - 1) % 9 + 1)
