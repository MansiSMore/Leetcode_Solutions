#1_Two_Sum
'''
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
'''
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        i = 0 ; j = len(nums) - 1
        ans = [0]* 2
        nums = sorted(zip(range(len(nums)), nums), key = lambda x: x[1])
        #print(nums)
        while i < j:
            ss = nums[i][1] + nums[j][1]
            if ss > target:
                j -= 1
            elif ss < target:
                i += 1
            else:
                ans[0] = nums[i][0]
                ans[1] = nums[j][0]
                break
        return ans
