class Solution {
public:
    // no recursion
    int climbStairs(int n) {
        // its own step
        if (n <= 2) return n; 
        // one step or two step
        int previous = 1;
        int current = 2;

        int count = 0; 
        for (int i = 3; i <= n; i++) {
            count = previous + current; // The number of ways to reach the current step is the sum of the ways to reach the previous two steps.
            previous = current; // Update the number of ways for the previous step (one step back).
            current = count; // Update the number of ways for the current step.
        }
        return count;
    }
};