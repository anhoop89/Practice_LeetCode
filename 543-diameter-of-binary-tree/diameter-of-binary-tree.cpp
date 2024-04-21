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
    int diameterOfBinaryTree(TreeNode* root) {
        if (!root)
            return 0;
        
        int diameter = 0;
        calculateDepth(root, diameter);
        
        return diameter;
    }
    
    int calculateDepth(TreeNode* root, int& diameter) {
        if (!root)
            return 0;
        
        int leftDepth = calculateDepth(root->left, diameter);
        int rightDepth = calculateDepth(root->right, diameter);
        
        // Update diameter if the combined depth of left and right subtrees is greater
        diameter = max(diameter, leftDepth + rightDepth);
        
        // Return the maximum depth of the current subtree
        return 1 + max(leftDepth, rightDepth);
    }
};
