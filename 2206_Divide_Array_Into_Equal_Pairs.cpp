/*
You are given an integer array nums consisting of 2 * n integers.
You need to divide nums into n pairs such that:
Each element belongs to exactly one pair.
The elements present in a pair are equal.
Return true if nums can be divided into n pairs, otherwise return false.

Example 1:
Input: nums = [3,2,3,2,2,2]
Output: true
Explanation: 
There are 6 elements in nums, so they should be divided into 6 / 2 = 3 pairs.
If nums is divided into the pairs (2, 2), (3, 3), and (2, 2), it will satisfy all the conditions.

Example 2:
Input: nums = [1,2,3,4]
Output: false
Explanation: 
There is no way to divide nums into 4 / 2 = 2 pairs such that the pairs satisfy every condition.

Constraints:
nums.length == 2 * n
1 <= n <= 500
1 <= nums[i] <= 500
*/
class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) 
    {
        unordered_map<int, int> uobj;
        
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] == key)
            {
                if(uobj[nums[i + 1]] == 0)
                    uobj[nums[i + 1]] = 1;
                else
                    uobj[nums[i + 1]] += 1;
            }
        }
        
        int max_occurrence = 0, target = 0;
        for(auto it : uobj)
        {
            if(it.second > max_occurrence)
            {
                max_occurrence = it.second;
                target = it.first;
            }
                
            //cout << it.first << " " << it.second << endl;
        }
        return target;   
    }
};
