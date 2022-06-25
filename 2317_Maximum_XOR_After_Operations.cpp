/*
You are given a 0-indexed integer array nums. In one operation, select any non-negative integer x and an index i, 
then update nums[i] to be equal to nums[i] AND (nums[i] XOR x).
Note that AND is the bitwise AND operation and XOR is the bitwise XOR operation.
Return the maximum possible bitwise XOR of all elements of nums after applying the operation any number of times.

Example 1:
Input: nums = [3,2,4,6]
Output: 7
Explanation: Apply the operation with x = 4 and i = 3, num[3] = 6 AND (6 XOR 4) = 6 AND 2 = 2.
Now, nums = [3, 2, 4, 2] and the bitwise XOR of all the elements = 3 XOR 2 XOR 4 XOR 2 = 7.
It can be shown that 7 is the maximum possible bitwise XOR.
Note that other operations may be used to achieve a bitwise XOR of 7.

Example 2:
Input: nums = [1,2,3,9,2]
Output: 11
Explanation: Apply the operation zero times.
The bitwise XOR of all the elements = 1 XOR 2 XOR 3 XOR 9 XOR 2 = 11.
It can be shown that 11 is the maximum possible bitwise XOR.

Constraints:
1 <= nums.length <= 105
0 <= nums[i] <= 108

*/
/* Trick :
At the first glance, I really don't know what number should we choose at any step for nums[i] AND (nums[i] XOR x).
Recalling the theorem of XOR, if we wanna get the largest outcome by XOR-ing the array of numbers, we need odd number of 1's in each bit.
Then, how about this nums[i] AND (nums[i] XOR x)? If you look at it closer, you realise that no matter how you XOR on the right side, 
you are gonna keep 1's with the left side, which is your original number. 
Hence, this is kinda a 1-bit deletion operation for you. You can definitely delete any 1-bit for nums[i] since you can choose any number.
*/
/*
You just need to calculate OR of all elements from array.
*/

class Solution {
public:
    int maximumXOR(vector<int>& nums) 
    {
        int max = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            max |= nums[i];
        }
        return max;
    }
};
