class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> collection; 
        vector<int> result;
        vector<vector<int>> arr(nums.size() + 1);
        for (auto value : nums) {
            collection[value]++;
        }

        for (auto [key, value] : collection) {
            arr[value].push_back(key);

        }

        // Collect top k elements
        // loop the arr to display top k element
        for (int i = arr.size() - 1 ; i > 0 && k > 0; i--  ){
            // could be many number that display one time
            for (auto num : arr[i]) {
                result.push_back(num); 
                k--;
                if (k == 0) break;
            }
        }
        return result;

    }
};