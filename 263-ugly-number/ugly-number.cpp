class Solution {
public:
    bool isUgly(int n) {
      bool check = false;
      while ( n > 1 ) {
        if ( n % 2 == 0) {n /= 2; check = true; }
        else if ( n % 3 == 0) {n /= 3; check = true; }
        else if ( n % 5 == 0) {n /= 5; check = true; }
        else return false;
        
        cout << "n:  " << n << endl;
      }
      if ( n == 1)
            return true;
      return false;  
    }
};