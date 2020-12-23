/*
Given an integer n, return true if it is a power of three. Otherwise, return false.

An integer n is a power of three, if there exists an integer x such that n == 3x.

Example 1:
Input: n = 27
Output: true

Example 2:
Input: n = 0
Output: false

Example 3:
Input: n = 9
Output: true

Example 4:
Input: n = 45
Output: false

Constraints:
-231 <= n <= 231 - 1
*/

bool isPowerOfThree(int n){
    while(n > 1)
    {
        (n % 3) == 0 ? (n = n / 3) : (n = 0);
    }
    return n == 1 ? true : false;
}
