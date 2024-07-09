class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        int size = n.size() - 1;
        int i = 0;
        int j = size;
        // 2 pointers, running both side to check the sum
        while (i < j) {
            int check = n[i] + n[j];
            if ( check > target)
                --j;
            if ( check < target)
                ++i;
            if (check == target)
                return {i+1, j+1};
        }
        return {};
    }
};