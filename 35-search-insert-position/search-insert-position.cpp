class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // range [ left    mid    right]
        int left = 0;
        int right = nums.size() - 1;
        int mid;
        // binary search tree method to find the closest to target
        while (left <= right) {
            mid = left + (right - left) /2;
            cout << "checking : " <<  mid;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target) {
                // update the left
                left = mid + 1; 
            } else
                //  update the right
               right = mid - 1; 
        }

        return left; 
    }
};