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
    int minDiffInBST(TreeNode* root) {
        int min_diff = INT_MAX;
        TreeNode* prev = nullptr;
        inorderTraversal(root, prev, min_diff);
        return min_diff;
    }

    void inorderTraversal(TreeNode* root, TreeNode*& prev, int& min_diff) {
        if (root == nullptr)
            return;

        inorderTraversal(root->left, prev, min_diff);

        if (prev != nullptr) {
            min_diff = min(min_diff, root->val - prev->val);
        }

        prev = root;

        inorderTraversal(root->right, prev, min_diff);
    }
};
