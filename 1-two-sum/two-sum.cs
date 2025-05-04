public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        int s = nums.Length;
        for (int i = 0; i < s; i++) {
            for (int j = i + 1; j < s; j++) {
                if (nums[i] + nums[j] == target) {
                    return new int[] {i, j};
                }
            }
        }
        return new int[0]; // or throw an exception
    }
}