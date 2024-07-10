class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        int i = 0;
        int mid = nums.size() / 2 + 1;

        while (i < nums.size()) {
            int c = 0 - nums[i];
            int r = nums.size() - 1;
            int l = i + 1;

            while (l < r) {
                int find = nums[l] + nums[r];
                if (find > c)
                    --r;
                else if (find < c)
                    ++l;
                else {
                    res.push_back({nums[i], nums[l], nums[r]});
                    // Move l and r to the next different numbers to avoid duplicates
                    while (l < r && nums[l] == nums[l + 1]) ++l;
                    while (l < r && nums[r] == nums[r - 1]) --r;
                    ++l;
                    --r;
                    // l > r will be out of the loop
                }
            }
            // Move i to the next different number to avoid duplicates
            while (i + 1 < nums.size() && nums[i] == nums[i + 1]) ++i;
            ++i;
        }
        return res;
    }
};