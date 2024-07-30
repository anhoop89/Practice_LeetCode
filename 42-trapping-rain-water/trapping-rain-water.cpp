class Solution {
public:
    int trap(vector<int>& h) {
        int l = 0;
        int r = h.size() -1 ;
        int maxL = 0; 
        int maxR = 0; 
        int res = 0;
       
        while ( l < r ) {
            cout << "l: " << h[l] << " --- r: " << h[r] << endl;
            maxL = max(h[l], maxL); 
            maxR = max(h[r], maxR); 
            if (h[l] < h[r]) {
             
                res += min(maxL, maxR) - h[l];

                cout << "l < r | maxL :  " << maxL << " -- maxR :  " << maxR << endl; 
                l++;
            } else {
          
                cout << "l >= r | maxL :  " << maxL << " -- maxR :  " << maxR << endl; 
                res += min(maxL, maxR) - h[r];
                r--;
            }
        }

        return res;
    }
};

/*
[0,1,0,2,1,0,1,3,2,1,2,1]
 



*/
