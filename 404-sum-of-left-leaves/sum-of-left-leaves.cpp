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
    int sumOfLeftLeaves(TreeNode* root) {
        if (!root->left && !root->right)
            return 0; 
        return sumLeft(root); 
    }

    int sumLeft(TreeNode * root) {
        if (!root ) 
            return 0; 

        if (isLeaf(root->left))
            return root->left->val + sumLeft(root->left) + sumLeft(root->right);
        return sumLeft(root->left) + sumLeft(root->right); 
    }

    bool isLeaf(TreeNode * root) {
        if (root && !root->left && !root->right)
            return true; 
        return false;
    }
};