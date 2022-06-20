/*
Given an array of integers nums, sort the array in increasing order based on the frequency of the values. 
If multiple values have the same frequency, sort them in decreasing order.
Return the sorted array.

Example 1:
Input: nums = [1,1,2,2,2,3]
Output: [3,1,1,2,2,2]
Explanation: '3' has a frequency of 1, '1' has a frequency of 2, and '2' has a frequency of 3.

Example 2:
Input: nums = [2,3,1,3,2]
Output: [1,3,3,2,2]
Explanation: '2' and '3' both have a frequency of 2, so they are sorted in decreasing order.

Example 3:
Input: nums = [-1,1,-6,4,5,-6,1,4,1]
Output: [5,-1,4,4,-6,-6,1,1,1]

Constraints:
1 <= nums.length <= 100
-100 <= nums[i] <= 100

*/
/*
First I try to insert the element with their frequency count in map, after that I created pair of every element with their frequency and 
created vector of pairs and then sort that according to frequency and again created vector for it.
*/
#include <unordered_map>

bool cmp(pair<int, int>& a, pair<int, int>& b)
{
    if(a.second == b.second)
        return a.first > b.first;
    else
        return a.second < b.second;
}
class Solution {    
public:
    vector<int> frequencySort(vector<int>& nums) 
    {
        unordered_map<int, int> uobj;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(uobj[nums[i]] == 0)
            {
                uobj[nums[i]] = 1;
            }
            else
            {
                uobj[nums[i]] += 1;
            }
        }
        
        vector<pair<int, int>> arr;
        for (auto& it : uobj) 
        {
            arr.push_back(it);
        }
        sort(arr.begin(), arr.end(), cmp);
        
        // for (auto& it : arr) 
        // {
        //     cout << it.first << " " << it.second << endl;
        // }
        vector<int> res;
        for(auto& x : arr)
        {
            for(int i = 0; i < x.second; i++)
            {
                res.push_back(x.first);
            }
            //cout << x.first << " " << x.second << endl;
        }
        
        return res;
    }
};
