/*
You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Example 1:
Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps

Example 2:
Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

Constraints:
1 <= n <= 45

*/

int climbStairs(int n)
{
    if(n == 1 || n == 2)
        return n;
    int temp1 = 1, temp2 = 1, temp = 0, i = 2;
    for(i = 2; i <= n ; i++)
    {
        temp = temp1 + temp2;
        temp1 = temp2;
        temp2 = temp;
        //printf("%d %d %d\n", temp, temp1, temp2);
    }
    
    return temp2;
}
