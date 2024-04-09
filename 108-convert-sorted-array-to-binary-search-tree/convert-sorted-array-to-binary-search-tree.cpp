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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode *root = nullptr; 
        root = addNode(nums, 0, nums.size() - 1);
        return root;
    }

   TreeNode* addNode(vector<int>& nums, int left, int right ) {
        cout << "left: " << left << "\t right: " << right << endl;
        if (left > right) {
            return nullptr;
        }
        // left + (right - left) / 2 calculates the midpoint between the left and right indices, ensuring that we find the middle index of the subrange.
        int mid = left + (right - left ) /2 ;

        cout << "\n mid: " << mid << endl << endl;
        // adding from the left to right
        TreeNode * newNode = new TreeNode(nums[mid]);
        newNode->left = addNode(nums, left, mid - 1); 
        newNode->right = addNode(nums, mid + 1, right);
        return newNode;

    }
};