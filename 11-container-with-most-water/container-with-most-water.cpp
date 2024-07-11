class Solution {
public:
    int maxArea(vector<int>& h) {
        int l = 0; 
        int r = h.size() - 1;
        int res = -111111;
        while ( l < r) {
            int temp = (r - l ) * min(h[l],h[r]);
            res = max(res, temp);
            if (h[l] >= h[r]) 
                --r; 
            else 
                ++l;
        }
        return res;
    }
};