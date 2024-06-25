class Solution {
public:
    // vector<int> topKFrequent(vector<int>& nums, int k) {
    //     unordered_map<int, int> collection; 
    //     vector<int> result;
    //     vector<vector<int>> arr(nums.size() + 1);
    //     for (auto value : nums) {
    //         collection[value]++;
    //     }

    //     for (auto [key, value] : collection) {
    //         arr[value].push_back(key);

    //     }
    //     vector<int> test{10,2};
    //     for (auto & i : test)
    //         cout << i << endl;
    //     // Collect top k elements
    //     // loop the arr to display top k element
    //     for (int i = arr.size() - 1 ; i > 0 && k > 0; i--  ){
    //         // could be many number that display one time
    //         // if arr[i] is empty, the inner loop won't run!!!
    //         for (auto num : arr[i]) {
    //             cout << "checking :  " << i << endl; 
    //             result.push_back(num); 
    //             k--;
    //             if (k == 0) break;
    //         }
    //     }
    //     return result;
    // }
    // Time: O(n)
    // Space: O(n)



     vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count; 
        for (auto & val: nums) {
            count[val]++;
        }

        vector<vector<int>>store(nums.size()+1);
        for(auto & [key, val]: count) {
            store[val].push_back(key);    
        }

        vector<int> result;
        for(int i = nums.size(); i > 0 & k >0; i--){
            for(auto & val : store[i]) {
                // it wont loop inside of each ele
                // just get the whole part and insert into the result
                result.push_back(val);
                if (--k == 0) break;
            }
        }
        return result;

     }




























 ////////////////////////////////////////////////////////////////////////////////    
};