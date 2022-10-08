/*
Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.
Return the sum of the three integers.
You may assume that each input would have exactly one solution.

Example 1:
Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

Example 2:
Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).

Constraints:
3 <= nums.length <= 1000
-1000 <= nums[i] <= 1000
-104 <= target <= 104
*/
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        sort(nums.begin(), nums.end());
        int clsSum = 0, clsDiff = INT_MAX;
        int n = nums.size();
        for(int i = 0; i < n - 2; i++)
        {
            int j = i + 1, k = n - 1;
            while(j < k)
            {
                int currSum = nums[i] + nums[j] + nums[k];
                if(currSum == target)
                    return target;  
                int currdiff = abs(currSum - target);

                if(currdiff < clsDiff)
                {
                    clsDiff = currdiff;
                    clsSum = currSum;
                }
                if(currSum > target)
                    k--;
                else
                    j++;
            } 
        }
        return clsSum;
    }
};
