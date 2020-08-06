#442. Find_All_Duplicates_in_an_Array
'''
Given an array of integers, 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements that appear twice in this array.

Could you do it without extra space and in O(n) runtime?

Example:
Input:
[4,3,2,7,8,2,3,1]

Output:
[2,3]
'''
class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        res = []
        for i in range(len(nums)):
            if(nums[abs(nums[i]) - 1] < 0):
                res.append(abs(nums[i]))
            else:
                nums[abs(nums[i]) - 1] *= -1
        return res
