public class Solution {
    public int[] TwoSum(int[] nums, int target) {
       Dictionary <int,int> map = new Dictionary<int, int>(); 

        for (int i = 0; i < nums.Length; i++) {
            int minusNum = target - nums[i];
            if (map.ContainsKey(minusNum)) {
                return [map[minusNum],i];
            } 

                map.TryAdd(nums[i],i);
        }

        return new int[0];
    }
}

// hashtable - add first ele. 2 will