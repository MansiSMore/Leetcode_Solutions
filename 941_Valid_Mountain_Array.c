/*
Given an array of integers arr, return true if and only if it is a valid mountain array.

Recall that arr is a mountain array if and only if:
1) arr.length >= 3
2) There exists some i with 0 < i < arr.length - 1 such that:
  arr[0] < arr[1] < ... < arr[i - 1] < A[i]
  arr[i] > arr[i + 1] > ... > arr[arr.length - 1]

Example 1:

Input: arr = [2,1]
Output: false
Example 2:

Input: arr = [3,5,5]
Output: false
Example 3:

Input: arr = [0,3,2,1]
Output: true
 
Constraints:

1 <= arr.length <= 104
0 <= arr[i] <= 104
*/

bool validMountainArray(int* arr, int size)
{
    int i = 0, j = size - 1, lcnt = 0, rcnt = 0;
    
    while (i < j) 
    {
        lcnt = arr[i] < arr[i + 1];
        rcnt = arr[j] < arr[j - 1];
            
        if(!lcnt && !rcnt) 
        {
            return false;
        }
            
        if(lcnt) 
        {
            i++;
        }
            
        if(rcnt) 
        {
                j--;
        }
    }
    return j > 0 && i < size - 1;
}
