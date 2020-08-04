//876.Middle of the Linked Last

//Two Pointer Approach
//Input: [1,2,3,4,5]
//Output: Node 3 from this list (Serialization: [3,4,5]) 
struct ListNode* middleNode(struct ListNode* head)
{
    struct ListNode* temp1 = head , *temp2 = head;
    
    while(temp1 != NULL && temp1->next != NULL)
    {
        temp1 = temp1 -> next -> next;
        temp2 = temp2 -> next;
    }
    
    return temp2;
}


