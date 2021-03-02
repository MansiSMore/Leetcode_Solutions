/*
You have a set of integers s, which originally contains all the numbers from 1 to n. 
Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, 
which results in repetition of one number and loss of another number.
You are given an integer array nums representing the data status of this set after the error.
Find the number that occurs twice and the number that is missing and return them in the form of an array.

Example 1:
Input: nums = [1,2,2,4]
Output: [2,3]

Example 2:
Input: nums = [1,1]
Output: [1,2]

Constraints:
2 <= nums.length <= 104
1 <= nums[i] <= 104

*/
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) 
    {
        vector<int> ans;
        vector<int> arr(nums.size()+1,0);
        for(auto n:nums)
            arr[n]++;
        int a,b;
        for(int i = 1;i < nums.size() + 1; i++)
        {
            if(arr[i] == 2)
                a = i;
            else if(arr[i] == 0)
                b = i;
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
        
    }
};
