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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result; 
        collectTreePaths(result, root, "");
        return result;
    }
    void collectTreePaths( vector<string> & result, TreeNode* root, string collect) {
        if (!root)
            return;
        collect += to_string(root->val);
        if (!root->left && !root->right)
            result.push_back(collect);
        else {
            // If not a leaf node, continue traversing the left and right subtrees
            collect += "->";
            collectTreePaths(result, root->left, collect);
            collectTreePaths(result, root->right, collect);
        }
    }
};