class Solution {
public:
    int trap(vector<int>& h) {
        int maxL = 0;
        int maxR = 0;

        int res = 0;

        int l = 0;
        int r = h.size() - 1;

        while ( l  < r ) {
            maxL = max(maxL, h[l]);
            maxR = max(maxR, h[r]);
            int mini = min(maxL, maxR);
            if (h[l] < h[r]) {
               res += mini - h[l];
                ++l;
            } else {
                res += mini - h[r];
                --r;
            }
        } 
        return res;
    }
};

/*
[0,1,0,2,1,0,1,3,2,1,2,1]
 



*/
