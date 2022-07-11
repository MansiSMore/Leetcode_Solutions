/*
You are given two strings current and correct representing two 24-hour times.
24-hour times are formatted as "HH:MM", where HH is between 00 and 23, and MM is between 00 and 59. 
The earliest 24-hour time is 00:00, and the latest is 23:59.
In one operation you can increase the time current by 1, 5, 15, or 60 minutes. You can perform this operation any number of times.
Return the minimum number of operations needed to convert current to correct.

Example 1:
Input: current = "02:30", correct = "04:35"
Output: 3
Explanation:
We can convert current to correct in 3 operations as follows:
- Add 60 minutes to current. current becomes "03:30".
- Add 60 minutes to current. current becomes "04:30".
- Add 5 minutes to current. current becomes "04:35".
It can be proven that it is not possible to convert current to correct in fewer than 3 operations.

Example 2:
Input: current = "11:00", correct = "11:01"
Output: 1
Explanation: We only have to add one minute to current, so the minimum number of operations needed is 1.

Constraints:
current and correct are in the format "HH:MM"
current <= correct

*/
class Solution {
public:
    int convertTime(string current, string correct) 
    {
        int current_h = (current[0] - '0') * 10 + (current[1] - '0');
        int current_m = (current[3] - '0') * 10 + (current[4] - '0');
        int correct_h = (correct[0] - '0') * 10 + (correct[1] - '0');
        int correct_m = (correct[3] - '0') * 10 + (correct[4] - '0');

        int min_diff = correct_m - current_m;
        int hr_diff = correct_h - current_h;
        int temp = hr_diff * 60 + min_diff;
        
        int cnt = 0;
        vector<int> nums = {1,5,15,60};
        for(int i = nums.size() - 1; i >= 0; i--)
        {
            while(temp >= nums[i])
            {
                temp -= nums[i];
                cnt++;
            }
        }
        
        cout << current_h << " " << current_m << " " << correct_h << " " << correct_m << endl;
        return cnt;
        
    }
};
