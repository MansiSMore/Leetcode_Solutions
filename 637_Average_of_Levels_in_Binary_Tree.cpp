/*
Given a non-empty binary tree, return the average value of the nodes on each level in the form of an array.
Example 1:
Input:
    3
   / \
  9  20
    /  \
   15   7
Output: [3, 14.5, 11]
Explanation:
The average value of nodes on level 0 is 3,  on level 1 is 14.5, and on level 2 is 11. Hence return [3, 14.5, 11].
Note:
The range of node's value is in the range of 32-bit signed integer.
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
    vector<double> averageOfLevels(TreeNode* root) 
    {
        vector<double> ans;
        if(root == nullptr)
            return ans;
        queue<TreeNode*> q;
        q.push(root);
        
        while(q.size()) 
        {
            int len = q.size();
            int cnt = len;
            double sum = 0; 
            while(len > 0) 
            {
                TreeNode *node = q.front();
                q.pop();
                if(node) 
                {
                    sum += node -> val;
                    if(node -> left)
                        q.push(node -> left);
                    if(node -> right)
                        q.push(node -> right);
                }
                len--;
            }
            ans.push_back(sum / cnt);
        }
        return ans;
    }
};
