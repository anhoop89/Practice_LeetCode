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

    // int longestConsecutive(vector<int>& nums) {
    //     unordered_set<int> arr(nums.begin(), nums.end());
 
    //     int len; 
    //     int max = 1;

    //     if (nums.empty()) return 0;
    //     for (auto & i : arr){

    //         // checking if the ele with the val ( i  - 1) exists in the arr set or not.
    //         if (!arr.count(i-1)) {
    //             len = 0;
    //             while (arr.find(i + len) != arr.end()) {
    //                 len++;
    //             }
    //             if ( max < len) max = len;
    //         }

         
    //     }

    //     return max;
        

    // }


    int longestConsecutive(vector<int>& nums) {
        // store all the unique nums in a set arr
        unordered_set<int> uniqueArr(nums.begin(), nums.end());

        // loop over the set, check if there's any consecutive sequence 

        int res = 0; 
       

        for(auto & val : uniqueArr) {
            int tempMax = 0;
            // 100 101 
            // check if the nums is at the begining
            if (!uniqueArr.count(val - 1)) {
                while (uniqueArr.count(val + tempMax) == 1) {
                    tempMax++;
                }

                res = max(res, tempMax);
            }
        }
        return res;

    }



























};