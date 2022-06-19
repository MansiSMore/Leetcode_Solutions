/*
You are given a 0-indexed integer array nums and a target element target.
A target index is an index i such that nums[i] == target.
Return a list of the target indices of nums after sorting nums in non-decreasing order. If there are no target indices, return an empty list. 
The returned list must be sorted in increasing order.

Example 1:
Input: nums = [1,2,5,2,3], target = 2
Output: [1,2]
Explanation: After sorting, nums is [1,2,2,3,5].
The indices where nums[i] == 2 are 1 and 2.

Example 2:
Input: nums = [1,2,5,2,3], target = 3
Output: [3]
Explanation: After sorting, nums is [1,2,2,3,5].
The index where nums[i] == 3 is 3.

Example 3:
Input: nums = [1,2,5,2,3], target = 5
Output: [4]
Explanation: After sorting, nums is [1,2,2,3,5].
The index where nums[i] == 5 is 4.

Constraints:

1 <= nums.length <= 100
1 <= nums[i], target <= 100
*/
/*
In this approach, We can obtain the indices of the target element in the sorted array just by counting the number of elements smaller than the target 
and the number of occourances of the target itself. 
*/
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) 
    {
        vector<int> res;
        
        int pos1 = 0, pos2 = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] < target)
            {
                pos1++;
                cout << pos1 << endl;
            }
            else if(nums[i] == target)
            {
                pos2++;
            }
        }
        
        for(int i = pos1; i < pos1 + pos2; i++)
        {
            res.push_back(i);
        }
        return res;
    }
};
