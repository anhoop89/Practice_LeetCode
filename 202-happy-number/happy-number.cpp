class Solution {
public:
    bool isHappy(int n) {      
        return  helper(n, 0);
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