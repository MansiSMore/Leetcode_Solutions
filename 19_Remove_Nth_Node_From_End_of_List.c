/*
Given the head of a linked list, remove the nth node from the end of the list and return its head.
Follow up: Could you do this in one pass?

Example 1:
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]

Example 2:
Input: head = [1], n = 1
Output: []

Example 3:
Input: head = [1,2], n = 1
Output: [1]

Constraints:

The number of nodes in the list is sz.
1 <= sz <= 30
0 <= Node.val <= 100
1 <= n <= sz
*/


struct ListNode* removeNthFromEnd(struct ListNode* head, int n)
{
    struct ListNode* temp1 = head, *temp2 = head;
    int i = 0;
    
    if(head -> next == NULL)
        return NULL;
    while(i != n)
	{
        temp2 = temp2 -> next;
        i++;
    }

    if(temp2 == NULL)
        return temp1->next;
    while(temp2->next != NULL)
    {
        temp1 = temp1 -> next;
        temp2 = temp2 -> next;
    }
	
    //printf("temp1 temp2 -> data :: %d %d\n",temp1 -> val,temp2->val);
    temp1 -> next = temp1 -> next -> next;
    
    return head;

}
