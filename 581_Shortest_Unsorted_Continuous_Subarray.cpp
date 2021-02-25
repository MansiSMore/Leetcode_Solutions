/*
Given an integer array nums, you need to find one continuous subarray that if you only sort this subarray in ascending order, 
then the whole array will be sorted in ascending order.

Return the shortest such subarray and output its length.

Example 1:
Input: nums = [2,6,4,8,10,9,15]
Output: 5
Explanation: You need to sort [6, 4, 8, 10, 9] in ascending order to make the whole array sorted in ascending order.

Example 2:
Input: nums = [1,2,3,4]
Output: 0

Example 3:
Input: nums = [1]
Output: 0

Constraints:
1 <= nums.length <= 104
-105 <= nums[i] <= 105

Follow up: Can you solve it in O(n) time complexity?
*/
class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        int cnt1 = -1, cnt2 = nums.size() - 1;
        
        int min_ele = INT_MAX;
        for(int i=nums.size() - 1; i >= 0; i--) 
        {
            min_ele = min(min_ele, nums[i]);
            if(nums[i] > min_ele)
                cnt1 = i;
        }

        int max_ele = INT_MIN;
        for(int i = 0; i<nums.size(); i++) {
            max_ele = max(max_ele, nums[i]);
            if(nums[i] < max_ele)
                cnt2 = i;
        }
        
        return cnt1 == -1 ? 0 : cnt2 - cnt1 + 1;
    }
};
    
