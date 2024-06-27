class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map < int,int>  mp;
        // mp   key = val.nums | val = index.nums
        for (int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if (mp.find(complement) != mp.end())
                return {i, mp[complement]};
            
            mp[nums[i]] = i;
        }
        return {};
    }
};