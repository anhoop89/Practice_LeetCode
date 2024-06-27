class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int max = 0; 
        int tempMax = 0;
         if (nums.empty()) return 0;
        if (nums.size() == 1) return 1;
        for (int i = 1; i < nums.size(); i++) {
           // cout << "before: " <<  nums[i-1] << "  " << nums[i] << endl;
            if (nums[i-1] == nums[i] || nums[i] == nums[i-1] + 1) {
                ++tempMax;
                if (nums[i-1] == nums[i]) --tempMax;
                if ( tempMax > max) max = tempMax;
            } else {
                tempMax = 0;
            }
        }

        return max + 1;
    }
};