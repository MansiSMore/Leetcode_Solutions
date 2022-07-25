/*
Given a 0-indexed n x n integer matrix grid, return the number of pairs (Ri, Cj) such that row Ri and column Cj are equal.
A row and column pair is considered equal if they contain the same elements in the same order (i.e. an equal array).
 
Example 1:
Input: grid = [[3,2,1],[1,7,6],[2,7,7]]
Output: 1
Explanation: There is 1 equal row and column pair:
- (Row 2, Column 1): [2,7,7]

Example 2:
Input: grid = [[3,1,2,2],[1,4,4,5],[2,4,2,2],[2,4,2,2]]
Output: 3
Explanation: There are 3 equal row and column pairs:
- (Row 0, Column 0): [3,1,2,2]
- (Row 2, Column 2): [2,4,2,2]
- (Row 3, Column 2): [2,4,2,2]

Constraints:
n == grid.length == grid[i].length
1 <= n <= 200
1 <= grid[i][j] <= 105
*/
class Solution {
public:
    bool compare(vector<int>& arr, vector<int>& brr)
    {
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] != brr[i])
                return false;
        }
        return true;
    }
    int equalPairs(vector<vector<int>>& grid) 
    {
        vector<vector<int>> columnEle;
        int i = 0, j = 0;
        
        while(j < grid.size())
        {
            vector<int> vobj;

            for(int i = 0; i < grid.size(); i++)
            {
                vobj.push_back(grid[i][j]);
                
            }
            columnEle.push_back(vobj);
            j++;
        }
        
        // for(int i = 0; i < columnEle.size(); i++)
        // {
        //     for(int j = 0; j < columnEle.size(); j++)
        //     {
        //         cout << columnEle[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        
        int cnt = 0;
        for(int i = 0; i < columnEle.size(); i++)
        {
            for(int j = 0; j < grid.size(); j++)
            {
                if(compare(columnEle[i], grid[j]) == true)
                    cnt++;
            }
        }
        return cnt;
    }
};
