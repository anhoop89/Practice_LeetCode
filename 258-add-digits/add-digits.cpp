class Solution {
public:
    // // code without recursion; 
    // int addDigits(int num) {
    //     int sum = 0;
    //     while ( num != 0) {
    //         sum += num % 10; 
    //         num /= 10; 
    //         if (num == 0)
    //             // if sum is one digit, return sum
    //             if (sum / 10 == 0) return sum;
    //             // if not, new num = current sum and set up the sum back to the default 0;
    //             else {
    //                 num = sum;
    //                 sum = 0;
    //             }
    //     }
    //     return 0;
    // }

        int addDigits(int num) {
            if (num == 0)
                return 0; 
            return 1 + (num - 1 ) % 9;
        }
};
/*
For other numbers: For any other non-zero number, we can find its digital root by adding its digits repeatedly until we get a single-digit result. However, there's a pattern we can use to shortcut this process.

Subtract 1 from the number (num - 1).
Take the result modulo 9 (% 9). This gives us a number between 0 and 8.
Add 1 to the result.
*/