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
//  */
// class Solution {
// public:
//     vector<int> findMode(TreeNode* root) {
//         if(!root)   return {};
//         vector<int> hold;
//         vector<int> ans;
//         helper(root, hold);
//          for (int i = 0; i < hold.size(); ++i) {
//             cout << hold[i] << " ";
//         }
//         cout << endl;
//         int temp = INT_MAX;
//         int count = 0;
//         bool check = false;
//         if (hold.size() == 1) return hold;

//         for (int i = 0; i < hold.size(); ++i) {
//             for (int j = i +1; j< hold.size(); ++j){
                
//                 if (hold[i] == hold[j]){
//                     count++; // it means more than one
//                     check = true;
//                 }
//             }

//             if (count > 0 && temp != hold[i]) {
//                 ans.push_back(hold[i]);
//                 temp = hold[i];
//             }
            
//             count = 0;
//         }
        
//         return check? ans : hold;
        
//     }


//     void helper(TreeNode * root, vector<int>& hold) {
//         if(!root)   return;
//         helper(root->left, hold);
//         hold.push_back(root->val);
//         helper(root->right, hold);
//     }
// };

class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        if (!root) return {};

        vector<int> hold;
        vector<int> ans;
        helper(root, hold);

        int temp = INT_MAX;
        int maxCount = 0;
        int currentCount = 0;
        
        for (int i = 0; i < hold.size(); ++i) {
           if (hold[i] != temp) {
                currentCount = 1;
                temp = hold[i];
            } else {
                currentCount++;
            }

            if (currentCount > maxCount) {
                maxCount = currentCount;
                ans.clear();
                ans.push_back(hold[i]);
            } else if (currentCount == maxCount) {
                ans.push_back(hold[i]);
            }
        }

        return ans;
    }

    void helper(TreeNode* root, vector<int>& hold) {
        if (!root) return;

        helper(root->left, hold);
        hold.push_back(root->val);
        helper(root->right, hold);
    }
};
