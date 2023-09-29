/*
Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.
You must implement a solution with a linear runtime complexity and use only constant extra space.

Example 1:
Input: nums = [2,2,3,2]
Output: 3

Example 2:
Input: nums = [0,1,0,1,0,1,99]
Output: 99

Constraints:
1 <= nums.length <= 3 * 104
-231 <= nums[i] <= 231 - 1
Each element in nums appears exactly three times except for one element which appears once.
*/
//method 1 :
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        unordered_map<int, int> uobj;
        for(int i = 0; i < nums.size(); i++)
        {
            uobj[nums[i]]++;
        }
        int num = 0;
        for(auto x : uobj)
        {
            if(x.second == 1)
            {
                num = x.first;
                break;
            }
        }
        return num;
    }
};

//method 2:
class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        if(nums.size() < 4)
        {
            return nums[0];
        }
        sort(nums.begin(), nums.end());
        
        //now check for first element and last element.
        //first element eg testcase {2, 3,3,3,4,4,4}
        if(nums[0] != nums[1])
            return nums[0];
        
        //last element eg testcase {2,2,2,3,3,3,4}
        if(nums[nums.size() - 1] != nums[nums.size() - 2])
        {
            return nums[nums.size() - 1];
        }
        
        int num = 0;
        //remaining testcases : {2,2,2,3,3,3,5,5,5,4,8,8,8}
        for(int i = 1; i < nums.size(); )
        {
            if(nums[i] == nums[i - 1])
            {
                i += 3;
            }
            else
            {
                num = nums[i - 1];
                break;
            }
        }
        return num;
    }
};
