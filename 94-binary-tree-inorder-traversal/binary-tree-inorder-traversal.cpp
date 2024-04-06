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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result; 
        if (root)
            helper(result, root);
        return result;
    }

    void helper(vector<int> & result, TreeNode* root) {
        if (!root)
            return;
  
        helper(result,root->left);

        result.push_back(root->val);
    
        helper(result, root->right);
        
    }
};