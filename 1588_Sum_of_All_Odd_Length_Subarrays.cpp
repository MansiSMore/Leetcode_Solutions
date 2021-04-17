/*
Given an array of positive integers arr, calculate the sum of all possible odd-length subarrays.
A subarray is a contiguous subsequence of the array.
Return the sum of all odd-length subarrays of arr.

Example 1:
Input: arr = [1,4,2,5,3]
Output: 58
Explanation: The odd-length subarrays of arr and their sums are:
[1] = 1
[4] = 4
[2] = 2
[5] = 5
[3] = 3
[1,4,2] = 7
[4,2,5] = 11
[2,5,3] = 10
[1,4,2,5,3] = 15
If we add all these together we get 1 + 4 + 2 + 5 + 3 + 7 + 11 + 10 + 15 = 58

Example 2:
Input: arr = [1,2]
Output: 3
Explanation: There are only 2 subarrays of odd length, [1] and [2]. Their sum is 3.

Example 3:
Input: arr = [10,11,12]
Output: 66

Constraints:
1 <= arr.length <= 100
1 <= arr[i] <= 1000

*/

# # Solution : 
/*
Input: arr = [1,4,2,5,3]
Output: 58
(Total sum = array elements * num of times it occurs in odd length subarrys) = 3+16+10+20+9 = 58.
eg. 1 occurs in [1], [1, 4, 2] and [1,4,2,5,3]
so at start sum is 1 * 3 = 3
*/
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) 
    {
        int sum = 0, len = arr.size();
        
        for(int i = 0; i < arr.size(); i++)
        {
            sum += ((i + 1) * (len - i) + 1) / 2*arr[i];
            cout << sum << " ";
        }
        return sum;
    }
};
//3 16 10 20 9 (Total= array elements * num of times it occurs) = 3+16+10+20+9 = 58.

