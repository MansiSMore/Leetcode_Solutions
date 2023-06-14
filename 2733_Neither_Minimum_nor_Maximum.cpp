/*
Given an integer array nums containing distinct positive integers, find and return any number from the array that is neither the minimum nor the maximum value in the array, or -1 if there is no such number.
Return the selected integer.

Example 1:
Input: nums = [3,2,1,4]
Output: 2
Explanation: In this example, the minimum value is 1 and the maximum value is 4. Therefore, either 2 or 3 can be valid answers.

Example 2:
Input: nums = [1,2]
Output: -1
Explanation: Since there is no number in nums that is neither the maximum nor the minimum, we cannot select a number that satisfies the given condition. Therefore, there is no answer.

Example 3:
Input: nums = [2,1,3]
Output: 2
Explanation: Since 2 is neither the maximum nor the minimum value in nums, it is the only valid answer. 

Constraints:
1 <= nums.length <= 100
1 <= nums[i] <= 100
All values in nums are distinct
*/

class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) 
    {
        int minval = *min_element(nums.begin(), nums.end());
        int maxval = *max_element(nums.begin(), nums.end());

        int ans = -1;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != minval && nums[i] != maxval)
            {
                ans = nums[i];
                break;
            }
        }
        return ans;
    }
};
