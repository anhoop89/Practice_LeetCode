class Solution {
public:
    // no recursion
    int climbStairs(int n) {
        int prev = 1; // one step
        int curr = 2; // 2 steps
        // its own step
        if ( n <= 2) return n;
        for (int i = 3; i <= n; i++) {
            int count = prev + curr;
            prev = curr;
            curr = count;
        }
        return curr;
    }
};

/*
i = 3: 3 ways
i = 4: 1 + 3 ways and 3 ways + 1 => 3 ways + 2 ways = 5 ways
*/