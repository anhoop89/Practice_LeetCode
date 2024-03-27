class Solution {
public:
    int reverse(int x) {
      const unsigned int range = INT_MAX;
      long long reversedNum = 0; 
      bool checkNeg = false; 
      if (x < 0 ) {
        checkNeg = true;
        x = abs(x); 
      } 

      if (abs(x) > INT_MAX )
            return 0;

      while (x > 0) {
     
        reversedNum = reversedNum * 10 + (x % 10);
        x /= 10; 

      }
        cout << "\nrange: " << range;
      if (reversedNum < range)
        return checkNeg?-reversedNum:reversedNum;  
      return 0;
    }
};