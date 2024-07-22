class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end()); 
      
        int l = 0;      
        int diff = 999999; 
        int res = 0;
        while (l < nums.size()) {
            int j = l + 1;
            int r = nums.size() - 1;
            while (j < r){
                int minSum = nums[l] + nums[j] + nums[r]; 
                if (minSum > target) {
                    r--;
                } else if ( minSum < target) 
                    j++;
                else
                    return minSum; 
                
                if ( abs(target - minSum) < diff ) {
                        diff = abs(target - minSum); 
                        res = minSum;
                }

            }

            l++;
        }

        return res;
    }
};

/*
[-1,2,1,-4]

-4 -1 1 2 

-4 [-1, 2] = -4 + 1 = -3 = 4
-4 [1, 2] = -4 + 3  = -1 = 2

-1 [1, 2] = -1 [ 3 ] = 2 = -1

min(); 
 
*/