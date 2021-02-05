/*
Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.
If target is not found in the array, return [-1, -1].

Follow up: Could you write an algorithm with O(log n) runtime complexity?

Example 1:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

Example 2:
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

Example 3:
Input: nums = [], target = 0
Output: [-1,-1]

Constraints:
0 <= nums.length <= 105
-109 <= nums[i] <= 109
nums is a non-decreasing array.
-109 <= target <= 109

*/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> result(2);
        result[0] = -1;
        result[1] = -1;
        
        int i = 0, j = nums.size() - 1;
        
        while(i <= j)
        {
            if(nums[i] == target)
            {
                result[0] = i;
                break;
            }
            i++;
        }
        
        if(result[0] == -1)
            return result;
        while(j >= 0)
        {
            if(nums[j] == target)
            {
                result[1] = j;
                break;
            }
            j--;
        }
        return result;
    }
};
