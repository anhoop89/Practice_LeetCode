class Solution {
public:
    bool isHappy(int n) {
        if (n == INT_MAX)
            return false;
        int sum = 0;
       
        return  helper(n, sum);
    }

    bool helper(int n , int sum) {
        if (n == 1) 
            return true;
        
        if (n == 4 )
            return false;
        while (n  > 0) {
            int num = (n % 10);
            sum +=  num  * num;
            cout << "num: " << n%10 << " --- sum loves js: " << sum << endl;
            n /= 10; 
        }

        return  helper(sum, 0);
    }
};
// cheating solution when we found the special case that is number 4
// cry :( 