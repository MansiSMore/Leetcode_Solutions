/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.

Example 1:
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]

Example 2:
Input: nums = []
Output: []

Example 3:
Input: nums = [0]
Output: []

Constraints:
0 <= nums.length <= 3000
-105 <= nums[i] <= 105

*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        if(nums.size() < 3)
            return vector<vector<int>>();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size() - 2; i++)
        {
            if(i == 0 || (i > 0 && nums[i] != nums[i - 1]))
            {
                int l = i + 1, h = nums.size() - 1, sum = 0 - nums[i];
                
                while(l < h)
                {
                    if((l < h) && (nums[l] + nums[h] == sum))
                    {
                        vector<int> v;
                        v.push_back(nums[i]);
                        v.push_back(nums[l]);
                        v.push_back(nums[h]);
                        
                        res.push_back(v);
                        while((l < h) && (nums[l] == nums[l + 1]))
                        {
                            l++;
                        }  
                        while((l < h) && (nums[h] == nums[h - 1]))
                        {
                            h--;
                        }  
                        l++, h--;
                    }
                    else if(nums[l] + nums[h] > sum)
                        h--;
                    else
                        l++;
                    
                }
            }
        }
        return res;
        
    }
};
