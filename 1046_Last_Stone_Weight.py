#1046. Last Stone Weight
'''
Example 1:
Input: [2,7,4,1,8,1]
Output: 1
Explanation: 
We combine 7 and 8 to get 1 so the array converts to [2,4,1,1,1] then,
we combine 2 and 4 to get 2 so the array converts to [2,1,1,1] then,
we combine 2 and 1 to get 1 so the array converts to [1,1,1] then,
we combine 1 and 1 to get 0 so the array converts to [1] then that's the value of last stone.
'''

class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        
        while (True):
            if len(stones) == 1 or len(stones) == 0 :
                break
            stones = sorted(stones)
            
            if (stones[-1] == stones[-2]):
                stones.pop()
                stones.pop()
            
            elif (stones[-1] != stones[-2]):
                stones[-1] = stones[-1] - stones[-2]
                stones.pop(-2)
        
        if(len(stones) == 1):
            return stones[0]
        else:
            return 0
