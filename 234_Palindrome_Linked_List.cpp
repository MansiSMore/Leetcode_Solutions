/*
Given the head of a singly linked list, return true if it is a palindrome.

Example 1:
Input: head = [1,2,2,1]
Output: true

Example 2:
Input: head = [1,2]
Output: false

Constraints:
The number of nodes in the list is in the range [1, 105].
0 <= Node.val <= 9

Follow up: Could you do it in O(n) time and O(1) space?
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
    bool isPalindrome(ListNode* head) 
    {
        vector<int> vobj;
        
        while(head != NULL)
        {
            vobj.push_back(head -> val);
            head = head -> next;
        }
        
        int i = 0, j = vobj.size() - 1;
        cout << vobj[i] << " " << vobj[j] << endl; 
        while(i < j)
        {
            if(vobj[i] == vobj[j])
            {
                i++, j--;
                //cout << vobj[i] << " " << vobj[j] << endl; 
            }
            else
            {
                //cout << vobj[i] << " " << vobj[j] << endl; 
                return false;
            }
        }
        
        return true;
    }
};


//method 2 : Using Two Pointer's Approach : 
/*To check if a singly linked list is a palindrome, use two pointers to find the middle of the linked list,
reverses the second half in place, and then compares the first half with the reversed second half to determine if the linked list is a palindrome.
This method doesn't use extra space and has a time complexity of O(n)
*/

class Solution {
public:
    ListNode* reverse(ListNode* head)
    {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode* temp = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return temp;
        
    }
    bool isPalindrome(ListNode* head) 
    {
        if (head == NULL || head->next == NULL)
        {
            return true;
        }
        
        ListNode* slow = head, *fast = head;
        
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* temp2 = reverse(slow);
        
        ListNode* temp1 = head;
        
        bool flag = true;
        while(temp2 != NULL)
        {
            if(temp1->val != temp2->val)
            {
                flag = false;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        if(flag == true)
            return true;
        else
            return false;
        
    }
};
