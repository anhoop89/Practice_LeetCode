class Solution {
public:
    // vector<int> twoSum(vector<int>& nums, int target) {
    //     unordered_map<int, int> storedArr; 
    //     // initialize the map
  
    //     for (int i = 0; i < nums.size(); i++) 
    //     {
    //         int findValue = target - nums[i];
    //         cout << findValue << "   " << i << endl;
    //         if (storedArr.find(findValue) != storedArr.end() ) 
    //             return {i, storedArr[findValue]};
    //         // if we don't find it , we should add the ele of nums to map
            
    //         // store all the ele from vector to the hashmap
    //         storedArr[nums[i]] = i;
    //     }
    //     return {};
    // }



    // review

    // vector<int> twoSum(vector<int>& nums, int target) {
    //     unordered_map <int, int > numMap; 

    //     for (int i = 0; i  < nums.size(); i++ ){
    //         int complement = target - nums[i];

    //         // find it
    //         if (numMap.find(complement) != numMap.end()) {
    //             return {i, numMap[complement]};
    //         }

    //         // add the nums ele to the numMap for checking later.
    //         numMap[nums[i]] = i; 
    //     }

    //     return {};

    // }

    //3rd
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map <int, int > numMap; 
       // need index and val
       for (int i = 0;  i < nums.size(); i++ ) {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end()) {
                return {i, numMap[complement]};
            }
            numMap[nums[i]] = i; 
       }

       return {};

    }

















};