/*
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

Example 1:
Input: nums = [3,2,3]
Output: [3]

Example 2:
Input: nums = [1]
Output: [1]

Example 3:
Input: nums = [1,2]
Output: [1,2]

Constraints:
1 <= nums.length <= 5 * 104
-109 <= nums[i] <= 109
Follow up: Could you solve the problem in linear time and in O(1) space?
*/
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        unordered_map<int, int> uobj;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++)
        {
            uobj[nums[i]]++;
        }
        
        int n = nums.size();
        for(auto x : uobj)
        {
            if(x.second > (n / 3))
            {
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};
