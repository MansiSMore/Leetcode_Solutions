/*
Given the head of a singly linked list, reverse the list, and return the reversed list.

Example 1:
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

Example 2:
Input: head = [1,2]
Output: [2,1]

Example 3:
Input: head = []
Output: []

Constraints:
The number of nodes in the list is the range [0, 5000].
-5000 <= Node.val <= 5000

Follow up: A linked list can be reversed either iteratively or recursively. Could you implement both?
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode* temp1 = NULL, *temp2 = NULL;
    
    while(head != NULL)
    {
        temp1 = head -> next;
        head -> next = temp2;
        temp2 = head;
        head = temp1;
        //printf("%d %d %d\n", head -> val, temp1 -> val, temp2 -> val);

    }
    return temp2;
}
