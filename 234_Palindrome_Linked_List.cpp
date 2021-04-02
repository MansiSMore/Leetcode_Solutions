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
