class Solution {
public:
    //Onlogn
    // int longestConsecutive(vector<int>& nums) {
    //     sort(nums.begin(), nums.end());

    //     int max = 0; 
    //     int tempMax = 0;
    //      if (nums.empty()) return 0;
    //     if (nums.size() == 1) return 1;
    //     for (int i = 1; i < nums.size(); i++) {
    //        // cout << "before: " <<  nums[i-1] << "  " << nums[i] << endl;
    //         if (nums[i-1] == nums[i] || nums[i] == nums[i-1] + 1) {
    //             ++tempMax;
    //             if (nums[i-1] == nums[i]) --tempMax;
    //             if ( tempMax > max) max = tempMax;
    //         } else {
    //             tempMax = 0;
    //         }
    //     }

    //     return max + 1;
    // }

    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> arr(nums.size());

        for (auto & val: nums) {
            arr.insert(val);
        }
      
        int len; 
        int max = 1;

        if (nums.empty()) return 0;
        for (int i = 0; i < nums.size(); i++){
            if (arr.find(nums[i] - 1) == arr.end()) {
                len = 0;
                while (arr.find(nums[i] + len) != arr.end()) {
                    len++;
                }
            }

           if ( max < len) max = len;
        }

        return max;
        

    }
};