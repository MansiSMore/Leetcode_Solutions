/*
Merge two sorted linked lists and return it as a new sorted list. The new list should be made by splicing together the nodes of the first two lists.
Example 1:
Input: l1 = [1,2,4], l2 = [1,3,4]
Output: [1,1,2,3,4,4]

Example 2:
Input: l1 = [], l2 = []
Output: []

Example 3:
Input: l1 = [], l2 = [0]
Output: [0]
 
*/
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode* temp = NULL;
    struct ListNode* head;

    temp = (struct ListNode*)malloc(sizeof(struct ListNode));

    if (l1 == NULL) 
    {
        temp = l2;
        return temp;
    }
    
    if (l2 == NULL) 
    {
        temp = l1;
        return temp;
    }    

    if (l1->val <= l2->val) 
    {
        head = l1;
    } 
    else 
    {
        head = l2;
    }

    while (l1 != NULL && l2 != NULL) 
    {
        if (l1->val <= l2->val) 
        {             
            temp -> next = l1;
            l1 = l1 -> next;
        }
        else 
        {            
            temp -> next = l2;
            l2 = l2 -> next;
        }
       temp = temp -> next;
    }
    
    if (l1 != NULL) 
    {
        temp -> next = l1;
    }
    
    if (l2 != NULL) 
    {
        temp -> next = l2;
    }
    return head;
}
