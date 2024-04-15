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
    int findSecondMinimumValue(TreeNode* root) {
        if (!root) return -1;
        long firstSmallest = root->val;
        long secSmallest = LONG_MAX;

        findSecondOne(root, firstSmallest, secSmallest);
        return secSmallest != LONG_MAX ? secSmallest: -1 ;
    }
    void findSecondOne(TreeNode * root, long & firstSmallest, long & secSmallest){
        if (!root)
            return; 
        
        if (root->val != firstSmallest && root->val < secSmallest) {
            secSmallest = root->val; // Update secSmallest if a new smaller value is found
        }

        findSecondOne(root->right, firstSmallest, secSmallest);
        findSecondOne(root->left, firstSmallest, secSmallest);

       
    }
};