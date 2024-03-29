/*
Given an integer n, return true if n has exactly three positive divisors. Otherwise, return false.
An integer m is a divisor of n if there exists an integer k such that n = k * m.

Example 1:
Input: n = 2
Output: false
Explantion: 2 has only two divisors: 1 and 2.

Example 2:
Input: n = 4
Output: true
Explantion: 4 has three divisors: 1, 2, and 4.

Constraints:
1 <= n <= 104

*/
class Solution {
public:
    int count(int n)
    {
        int i = 1, cnt = 0;
        
        while(i <= n)
        {
            if(n % i == 0)
                cnt++;
            i++;
            cout << cnt;
        }
        return cnt;
    }
    bool isThree(int n) 
    {
        if(n == 1)
            return false;
        
        if(count(n) == 3)
            return true;
        return false;
        
    }
};
