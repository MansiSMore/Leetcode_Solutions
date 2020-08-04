#53 Maximum Subarray
class Solution:
    def findSum(self,arr,l,mid,r):
        prev1 = 0 ; sum1 = -1000
        for i in range(mid,l-1,-1):
            prev1 += arr[i]
            if prev1 >= sum1:
                sum1 = prev1
        prev2 = 0 ; sum2 = -1000
        for i in range(mid+1,r+1):
            prev2 += arr[i]
            if prev2 >= sum2:
                sum2 = prev2
        return max(sum1+sum2, sum1,sum2)
    def partition(self,arr , l , r):
        if l==r:
            return arr[l]
        mid = (l+r)//2
        return max(self.partition(arr,l,mid),self.partition(arr,mid+1,r),self.findSum(arr,l,mid,r))
    def maxSubArray(self, nums: List[int]) -> int:
        return self.partition(nums,0,len(nums)-1)
        
