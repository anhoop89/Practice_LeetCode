class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        // Map to store the index of each number
        unordered_map<int, int> numIndexMap; 
        
        for (int i = 0; i < nums.size(); ++i) {
            if (numIndexMap.find(nums[i]) != numIndexMap.end() && i - numIndexMap[nums[i]] <= k) {
                // If the current number has been seen before and the difference in indices is at most k
                return true;
            }
            // Update the index of the current number in the map
            numIndexMap[nums[i]] = i;
        }
        
        return false;
    }
};
