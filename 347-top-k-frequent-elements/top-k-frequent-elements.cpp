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



    //  vector<int> topKFrequent(vector<int>& nums, int k) {
    //     unordered_map<int, int> count; 
    //     for (auto & val: nums) {
    //         count[val]++;
    //     }

    //     vector<vector<int>>store(nums.size()+1);
    //     for(auto & [key, val]: count) {
    //         store[val].push_back(key);    
    //     }

    //     vector<int> result;
    //     for(int i = nums.size(); i > 0 & k >0; i--){
    //         for(auto & val : store[i]) {
    //             // it wont loop inside of each ele
    //             // just get the whole part and insert into the result
    //             result.push_back(val);
    //             if (--k == 0) break;
    //         }
    //     }
    //     return result;

    //  }




/*
    hashmap: val | count

    vector with the size of nums : eg: 6
    Edge case: if more than one number having the same count
    we have to use another vector to store them 
    -> vector<vector<int>>  
    count: 1  2  3  4  5  6
    val:   3  2  1     
*/

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count; 
        for (auto & number : nums) {
            count[number]++;
        }

        // store in an arr sorting by the index
        vector<vector<int>> store(nums.size() + 1);
        for(auto &[num, ct]: count) {
            store[ct].push_back(num);
        }

        vector<int> res; 
        for ( int i = nums.size(); i > 0 && k > 0; i-- ) {
            for ( auto & val : store[i]) {
                res.push_back(val);
                if (--k == 0) return res;
            }
        }

        return res;
    }

//  hashtable: 

//  nums = [1,1,1,2,2,3]
//  key: val
//  1: 3
//  2: 2
//  3: 1


















 ////////////////////////////////////////////////////////////////////////////////    
};