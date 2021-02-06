/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
 
 /*
Given a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

Example:
Input: [1,2,3,null,5,null,4]
Output: [1, 3, 4]
Explanation:

   1            <---
 /   \
2     3         <---
 \     \
  5     4       <---
  
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) 
    {
        vector<int>ans;
        if(root == NULL)
        {
            return ans;
        }
        
        queue<TreeNode*> qobj;
        qobj.push(root);
        while(!qobj.empty())
        {
            int n = qobj.size();
            for(int i = 0 ; i < n ; i++)
            {
                TreeNode* temp = qobj.front();
                qobj.pop();
                
                if(i == n - 1)
                {
                    ans.push_back(temp->val);
                }
                if(temp->left != NULL)
                {
                    qobj.push(temp->left);
                }
                if(temp->right != NULL)
                {
                    qobj.push(temp->right);
                }
            }
        }
        return ans;
    }
};
