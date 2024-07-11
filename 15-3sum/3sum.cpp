class Solution {
public:
    // -4, -1, -1, 0, 1, 2
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end()); 
        
        int i = 0; 
        int size = nums.size();
        while ( i < size) {
            // -4 -1 -1 0 1 2
            int find = - nums[i]; 
            int j = i+1; 
            int k = size - 1;
            while ( j < k ) {
                int check = nums[j] + nums[k];
                if (check < find ) ++j;
                else if ( check > find ) --k;
                else
                {
                    res.push_back({nums[i], nums[j], nums[k]});
                    while ( j < k && nums[k] == nums[k-1]) --k;
                    while ( j < k && nums[j] == nums[j+1]) ++j;
                    ++j;
                    --k;
                } 
               
             
            }
        
            while (i + 1 < size && nums[i] == nums[i+1]) ++i;
            ++i;
        }

        return res;
    }
};