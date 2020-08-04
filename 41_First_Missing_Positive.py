#41. First Missing Positive
class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        n = len(nums)
        for i in range(n):
            pos = nums[i] - 1
            while 1 <= nums[i] <= n and nums[i] != nums[pos]:
                nums[i], nums[pos] = nums[pos], nums[i]
                pos = nums[i] - 1
        
        for i in range(n):
            if nums[i] != i+1:
                return i+1
        return n+1
