class Solution {

// complexity: nlogn
// space: O(1)
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         sort(nums.begin(), nums.end());

        
//         for (int i = 0; i < nums.size() - 1; ++i ) {
//             // if the pair is matching, return true that meant at least one pair
//             if (nums[i] == nums[i+1])
//                 return true;
//         }
//         return false;
//     }
// };


// time: On
// space: On 
// hashMap
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         // create a hasharr
//         unordered_map<int, int> storedNum; 

//         for (int i = 0; i < nums.size(); i++ ) {
//             cout << "nums[0] : " << nums[i] << endl;
//             if (storedNum.find(nums[i]) != storedNum.end())
//                 return true;
//             else 
//                 storedNum[nums[i]] = i;
//         }

//         return false;
//     }
// };










// solution: do hashSet => review must do hashSet method
// redo
public:
    // bool containsDuplicate(vector<int>& nums) {
    //     unordered_set<int> map; 
    //     // just care about the value instead of the index
    //     for (auto val: nums) {
    //         if (map.find(val) != map.end()) 
    //             return true;
    //         map.insert(val);
    //     }
    //     return false;
    // }


  //REDO 3th time: 

        // bool containsDuplicate(vector<int>& nums) {
        //     unordered_map<int,int> mp; 

        //     for (auto & val : nums) {
        //         mp[val]++;
        //     }

        //     for (auto & i : mp) {
        //         if (i.second > 1)   
        //             return true;
        //     }
        //     return false;
        // }

    //4th 
        //  bool containsDuplicate(vector<int>& nums) {
        //    unordered_set<int> map;

        //    for (auto & val : nums) {
        //     // found it
        //         if (map.find(val) != map.end())
        //             return true;
        //         // else we add into the set
        //         map.insert(val);
        //    }
        //     return false;
        // }

 
    //5th
    // bool containsDuplicate(vector<int>& nums) {
    //     unordered_set <int> mp; 

    //     for (auto & val: nums) {
    //         if (mp.find(val) != mp.end())
    //             return true;
    //         mp.insert(val);
    //     }

    //     return false;
    // }

    //6
    bool containsDuplicate(vector<int>& nums) {
        // unordered_set<int> mp; 

        // for (auto & val : nums) {
        //     if (mp.find(val) != mp.end())
        //         return true;
        //     mp.insert(val);
        // }

        // return false;

        //too slow
        // unordered_map <int, int> mp; 

        // for (auto & i: nums)
        //     mp[i]++;
        // for (auto & key:nums) {
        //     cout << "\n" <<key <<endl;
        //     if (mp[key]  > 1)
        //         return true;
        // }
        // return false;

        // sorting method
        sort(nums.begin(), nums.end());

        if (nums.size() < 2) return false;

        for (int i = 1; i < nums.size(); i++){
            if (nums[i] == nums[i-1]) return true;
        }

        return false;
    }





































};



















