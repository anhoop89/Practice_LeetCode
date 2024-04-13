class Solution {
public:
    int addDigits(int num) {
        int sum = 0;
        while ( num != 0) {
            sum += num % 10; 
            num /= 10; 
            if (num == 0)
                if (sum / 10 == 0) return sum;
                else {
                    num = sum;
                    sum = 0;
                }
        }
        return 0;
    }
};