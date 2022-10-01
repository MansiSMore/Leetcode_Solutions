/*
Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.
An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. 
You may assume all four edges of the grid are all surrounded by water.

Example 1:
Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1

Example 2:
Input: grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]

Output: 3
Constraints:
m == grid.length
n == grid[i].length
1 <= m, n <= 300
grid[i][j] is '0' or '1'.
*/
#include<vector>
#include<queue>
class Solution {
public:
    void bfs(int i, int j, vector<vector<int>>& visited, vector<vector<char>> grid)
    {
        visited[i][j] = 1;
        queue<pair<int, int>> q;
        q.push({i, j});
        int n = grid.size(), m = grid[0].size();

        while(!q.empty())
        {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for(int irow = -1; irow <= 1; irow++)
            {
                for(int icol = -1; icol <= 1; icol++)
                {
                    if(abs(irow)==abs(icol))
                    {
                        continue;
                    }
                    int i1 = irow + row, j1 = icol + col;
                    if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && grid[i1][j1] == '1' && !visited[i1][j1])
                    {
                        visited[i1][j1] = 1;
                        q.push({i1, j1});
                    }
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> visited(n, vector<int>(m , 0));
        int cnt = 0;

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(visited[i][j] == 0 && grid[i][j] == '1')
                {
                    bfs(i, j, visited, grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
