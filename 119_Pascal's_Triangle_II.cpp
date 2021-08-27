/*
Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

Example 1:
Input: rowIndex = 3
Output: [1,3,3,1]

Example 2:
Input: rowIndex = 0
Output: [1]

Example 3:
Input: rowIndex = 1
Output: [1,1]

Constraints:
0 <= rowIndex <= 33

Follow up: Could you optimize your algorithm to use only O(rowIndex) extra space?
*/
class Solution {
public:
    
    //For Calculating combination N with r i.e. nCr.
    int comb(int n, int r)
    {
        long ans = 1;
        
        for(int i = 0; i < r; i++)
        {
            ans *= (n - i);
            ans /= (i + 1);
        }
        return ans;
    }
    vector<int> getRow(int rowIndex) 
    {
        vector<int> res;
        
        for(int i = 0; i <= rowIndex; i++)
        {
            res.push_back(comb(rowIndex, i));
        }
        
        return res;
    }
};
