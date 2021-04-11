/*
Given the root of a binary tree, return the sum of values of its deepest leaves.

Example 1:
Input: root = [1,2,3,4,5,null,6,7,null,null,null,null,8]
Output: 15

Example 2:
Input: root = [6,7,8,2,7,1,3,9,null,1,4,null,null,null,5]
Output: 19

Constraints:
The number of nodes in the tree is in the range [1, 104].
1 <= Node.val <= 100
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
    void solve(TreeNode* root, int curr_level, int &max_level, int &ans)
    {
        if(root == NULL)
        {
            return;
        }
        
        if(max_level == curr_level)
        {
            ans += root -> val;
        }
        
        if(max_level < curr_level)
        {
            ans = root -> val;
            max_level = curr_level;
        }
        
        solve(root -> left, curr_level + 1, max_level, ans);
        solve(root->right, curr_level + 1, max_level, ans);
        
    }
    
    int deepestLeavesSum(TreeNode* root) 
    {
        int max_level = -1, curr_level = 0;
        int ans = 0;
        solve(root, curr_level, max_level, ans);
        return ans;
    }
};
