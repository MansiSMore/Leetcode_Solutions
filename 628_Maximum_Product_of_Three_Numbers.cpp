/*
Given an integer array nums, find three numbers whose product is maximum and return the maximum product.

Example 1:
Input: nums = [1,2,3]
Output: 6

Example 2:
Input: nums = [1,2,3,4]
Output: 24

Example 3:
Input: nums = [-1,-2,-3]
Output: -6

Constraints:
3 <= nums.length <= 104
-1000 <= nums[i] <= 1000
*/
using namespace std;
class Solution {
public:
    int maximumProduct(vector<int>& nums) 
    {        
        sort(nums.begin(), nums.end());
        
        return max(nums[0]*nums[1]*nums[nums.size()-1], nums[nums.size()-3]*nums[nums.size()-2]*nums[nums.size()-1]);
    }
};
