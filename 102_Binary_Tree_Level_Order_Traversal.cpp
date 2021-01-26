/*

Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its level order traversal as:
[
  [3],
  [9,20],
  [15,7]
]

*/
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
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<int> vobj;
        vector<vector<int>> result;
        
        if(root == NULL)
            return result;
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr);
        

        while(q.empty() == false)
        {
            TreeNode *node = q.front();
            q.pop();
            
            if(node)
            {
                vobj.push_back(node -> val);
                cout << node->val << " ";
                //q.pop();

                if(node->left != NULL)
                {
                    q.push(node->left);
                }

                if(node->right != NULL)
                {
                    q.push(node->right);   
                }
            }
            else
            {
                result.push_back(vobj);
                vobj.clear();
                
                if (!q.empty())
                    q.push(nullptr);
            }
        }
        
        return result;  
    }
};

