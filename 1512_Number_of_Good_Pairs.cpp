/*
Given an array of integers nums.
A pair (i,j) is called good if nums[i] == nums[j] and i < j.
Return the number of good pairs.

Example 1:
Input: nums = [1,2,3,1,1,3]
Output: 4
Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.

Example 2:
Input: nums = [1,1,1,1]
Output: 6
Explanation: Each pair in the array are good.

Example 3:
Input: nums = [1,2,3]
Output: 0

Constraints:
1 <= nums.length <= 100
1 <= nums[i] <= 100

*/

#include <unordered_map> 

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        unordered_map<int, int> mobj;
        int cnt = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            mobj[nums[i]]++;
        }
        
        for(auto m : mobj)
        {
            if(m.second != 1)
                cnt += (m.second * (m.second - 1) / 2);
        }
        
        return cnt;
    }
};
