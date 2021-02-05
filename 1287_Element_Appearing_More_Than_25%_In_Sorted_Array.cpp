/*
Given an integer array sorted in non-decreasing order, there is exactly one integer in the array that occurs more than 25% of the time.
Return that integer.

Example 1:
Input: arr = [1,2,2,6,6,6,6,7,10]
Output: 6

Constraints:
1 <= arr.length <= 10^4
0 <= arr[i] <= 10^5

*/
class Solution {
public:
  
    int findSpecialInteger(vector<int>& arr) 
    {
        unordered_map<int, int> umap;
        int len = arr.size();
        
        for(int i = 0; i < arr.size(); i++)
        {
            ++umap[arr[i]];
        }
        
        int cnt = (len * 0.25);
        int val = 0;
        unordered_map<int, int>:: iterator itr; 
        for (itr = umap.begin(); itr != umap.end(); itr++) 
        {
            int fre = itr -> second;
            if(fre > cnt)
                val = itr -> first;
           // cout << itr->first << "  " << itr->second << endl;
        }
        return val;
        
    }
};
