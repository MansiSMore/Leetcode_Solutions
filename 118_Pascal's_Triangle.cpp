/*
Given an integer numRows, return the first numRows of Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

Example 1:
Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]

Example 2:
Input: numRows = 1
Output: [[1]]

Constraints:
1 <= numRows <= 30

*/
class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> arr(numRows);
        
        for(int i = 0; i < numRows; i++)
        {
            arr[i].resize(i + 1);
            arr[i][0] = arr[i][i] = 1;
            
            for(int j = 1; j < i; j++)
            {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
        return arr;
    }
};
