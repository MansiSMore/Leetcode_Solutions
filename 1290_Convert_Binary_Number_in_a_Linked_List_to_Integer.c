/*
Given head which is a reference node to a singly-linked list. 
The value of each node in the linked list is either 0 or 1. 
The linked list holds the binary representation of a number.
Return the decimal value of the number in the linked list.

Example 1:
Input: head = [1,0,1]
Output: 5
Explanation: (101) in base 2 = (5) in base 10

Example 2:
Input: head = [0]
Output: 0

Example 3:
Input: head = [1]
Output: 1

Example 4:
Input: head = [1,0,0,1,0,0,1,1,1,0,0,0,0,0,0]
Output: 18880

Example 5:
Input: head = [0,0]
Output: 0

Constraints:

The Linked List is not empty.
Number of nodes will not exceed 30.
Each node's value is either 0 or 1.
*/
int pow1(int n)
{
    int i = 0, pow = 1;
    for(i = 0; i < n; i++)
    {
        pow *= 2;
    }
    
    return pow;
}

int count(struct ListNode* head)
{
    int icnt = 0;
    while(head != NULL)
    {
        icnt++;
        head = head -> next;
    }
    return icnt;
}
int getDecimalValue(struct ListNode* head)
{
    int cnt = 0, ans = 0, pow = 0, i = 0;
    
    cnt = count(head);
    
    i = cnt;
    while(head != NULL)
    {
        if(head -> val == 1)
            ans += pow1(i-1);
        i--;
        head = head -> next;
    }
    
    return ans;
}
