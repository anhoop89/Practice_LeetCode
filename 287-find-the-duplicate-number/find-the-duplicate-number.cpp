class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int updated_index = abs(nums[i])  - 1;
            cout << "before: "  << updated_index << " " << nums[updated_index] << endl;
            if (nums[updated_index] < 0)
                return abs(nums[i]);
            
            nums[updated_index] = -nums[updated_index];
            cout << updated_index << " " << nums[updated_index] << endl;
        }

        return 0;
    }
};