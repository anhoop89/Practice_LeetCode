class Solution {
public:
    int climbStairs(int n) {
        // Base cases
        if (n == 0 || n == 1) return 1;

        // Initialize variables to store the number of ways to reach steps 0 and 1
        int prev = 1; // Number of ways to reach step 0
        int curr = 1; // Number of ways to reach step 1

        // Iterate from step 2 to step n
        for (int i = 2; i <= n; ++i) {
            // Calculate the number of ways to reach step i by summing the number of ways to reach steps i-1 and i-2
            int next = prev + curr;
            // Update the previous and current variables for the next iteration
            prev = curr;
            curr = next;
        }

        // Return the number of ways to reach step n
        return curr;
    }
};
/*

*/