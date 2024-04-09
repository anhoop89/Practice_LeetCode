class Solution {
public:
    bool isHappy(int n) {
        if (n == INT_MAX)
            return false;
        int sum = 0;
        vector<int> visited;
         return helper(n, sum, visited);
    }

     bool helper(int n , int sum, vector<int>& visited) {
    
        if (n == 1) 
            return true;
        
        while (n  > 0) {
            int num = (n % 10);
            sum +=  num  * num;
            cout << "num: " << n%10 << " --- sum loves js: " << sum << endl;
            n /= 10; 
        }
        
        if (find(visited.begin(), visited.end(), sum) != visited.end())
            return false; // Cycle detected, the number is not happy
        visited.push_back(sum);
        return  helper(sum, 0, visited);
    }
};