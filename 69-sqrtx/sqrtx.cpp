class Solution {
public:
    int mySqrt(int x) {
        int left = 1; 
        int right = x;
        long mid = 0; 
        long square = 0;
        while ( left <= right) {
            mid = left + ( right - left) / 2;
            square = mid * mid; 
            if (square == x)
                return mid; 
            else if ( square > x) right = mid - 1;
            else left = mid + 1;
        }       
        return right;
    }
};

/*
re-do: 

1     2    3    4 
left            right (x) 

square = mid * mid 
*/