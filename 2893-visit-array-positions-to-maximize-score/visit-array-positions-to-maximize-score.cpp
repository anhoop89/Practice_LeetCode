class Solution {
public:
    using ll = long long;
    long long maxScore(vector<int>& nums, int x) {
        int n = nums.size();
        vector<vector<ll>> memo(n, vector<long long>(2, -1)); 
        return dp(nums, x, 1, nums[0] & 1, memo) + nums[0];
    }

    long long dp(vector<int>& nums, int x, int index, int parity, vector<vector<ll>>& memo) {
        if (index >= nums.size()) {
            return 0;
        }

        ll &res = memo[index][parity];

        if (res != -1) return res;
        
        ll currParity = nums[index] & 1;

        // Calculate the scores by taking or skipping the current index
        ll take = nums[index] + dp(nums, x, index + 1, currParity, memo) - (currParity == parity ? 0 : x);
        ll skip = dp(nums, x, index + 1, parity, memo);
        return res = max(take, skip); 


    }
};