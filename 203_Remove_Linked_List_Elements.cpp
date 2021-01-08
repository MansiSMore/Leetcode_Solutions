/*
Remove all elements from a linked list of integers that have value val.

Example:
Input:  1->2->6->3->4->5->6, val = 6
Output: 1->2->3->4->5
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) 
    {
        if(!head)
            return NULL;
        while(head and head->val == val) //deleting from front 
            head = head->next;
        if(!head)
            return NULL;
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        while(temp){
            if(temp1->val == val){
                while(temp1 and temp1->val==val){  //deleting from middle 
                    temp1 = temp1->next;
                }
                if(!temp1){ // if middle become end
                    temp2->next = NULL;
                    return head;
                }
                temp2->next = temp1;
            }
            temp2 = temp1 ;
            temp1 = temp1->next;
        }
        return head;
    }
};
