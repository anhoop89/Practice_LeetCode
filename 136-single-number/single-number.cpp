class Solution {
public:
    int singleNumber(vector<int>& nums) {

        //  nums.at(2) return 0 1 2 
        // normal way
        int result = 0; 
        int temp = 0;
        map<int, int> countMap; 

        // [2,]
        for (int i = 0; i < nums.size(); i++) {
            // how many times the number appear 
            if (countMap.find(nums[i]) != countMap.end()) {
                // found
                cout << "\nfound:  " <<countMap[nums[i]] << "\n";
                countMap[nums[i]] = 2; 
            } else {
                // not found
                countMap.insert({nums[i], 1});
                cout << "\ndisplay:  " <<countMap[nums[i]] << "\n";
            }
        }

          for (auto it = countMap.begin(); it != countMap.end(); it++) {
               if (it->second == 1) return it->first;
            }

        // optimized way
        return result;
    }
};