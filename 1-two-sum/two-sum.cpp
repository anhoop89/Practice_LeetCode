class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> storedArr; 
        // initialize the map
  
        for (int i = 0; i < nums.size(); i++) 
        {
            int findValue = target - nums[i];
            cout << findValue << "   " << i << endl;
            if (storedArr.find(findValue) != storedArr.end() ) 
                return {i, storedArr[findValue]};
            // if we don't find it , we should add the ele of nums to map
            
            // store all the ele from vector to the hashmap
            storedArr[nums[i]] = i;
        }
        return {};
    }
};