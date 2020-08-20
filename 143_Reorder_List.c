//143_Reorder_List
/*
Given a singly linked list L: L0→L1→…→Ln-1→Ln,
reorder it to: L0→Ln→L1→Ln-1→L2→Ln-2→…

You may not modify the values in the list's nodes, only nodes itself may be changed.

Example 1:

Given 1->2->3->4, reorder it to 1->4->2->3.
Example 2:

Given 1->2->3->4->5, reorder it to 1->5->2->4->3.
*/
void reorderList(struct ListNode* head)
{
    if(!head || !head->next || !head->next->next)
        return;
    struct ListNode *temp2 = head;
    while(temp2->next->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next->next = head->next;
    head->next = temp2->next;
    temp2->next = NULL;
    
    reorderList(head->next->next);

}