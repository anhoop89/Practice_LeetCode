class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> store; 

        for (int i = 0; i < nums.size(); i++){
            // count function return 1 if there exists nums[i], otherwise return 0 
            if (store.count(nums[i]) && i - store[nums[i]] <= k )
                return true;
            store[nums[i]] = i; 
        }
        return false;
    }
};
