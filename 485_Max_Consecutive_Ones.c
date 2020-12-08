/*
Given a binary array, find the maximum number of consecutive 1s in this array.

Example 1:
Input: [1,1,0,1,1,1]
Output: 3

Explanation: The first two digits or the last three digits are consecutive 1s.
    The maximum number of consecutive 1s is 3.

Note:
The input array will only contain 0 and 1.
The length of input array is a positive integer and will not exceed 10,000

*/
int findMaxConsecutiveOnes(int* nums, int n)
{
    if(n == 0)
        return 0;
    int currcnt = 0, maxcnt = 0, i = 0;
    for(i = 0; i < n; i++)
    {
        if(nums[i] == 1)
        {
            currcnt++;
        }
        else if(nums[i] == 0)
        {
            currcnt = 0;
        }
        
        if(currcnt >= maxcnt)
            maxcnt = currcnt;
    }
    //printf("%d %d", maxcnt, currcnt);
    return maxcnt;

}
