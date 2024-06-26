class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());

        int prefix = 1; // left to right
        for (int i = 0; i < nums.size(); i++){
            res[i] = prefix; 
            prefix *= nums[i];
        }

        int postfix = 1; // right to left
        for (int i = nums.size() -1; i >= 0 ; i--) {
            res[i] *= postfix;
            postfix *= nums[i];
        }

        return res;
    }
};