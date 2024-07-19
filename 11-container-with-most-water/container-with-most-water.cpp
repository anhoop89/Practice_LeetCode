class Solution {
public:
    int maxArea(vector<int>& h) {
        int l = 0, r = h.size() - 1;
        int maxArea = -1000000;
        while ( l  < r) {
            int area = ( r - l ) * min(h[l], h[r]);
            maxArea = max(maxArea, area);
            if ( h[l] < h[r] )
                l++;
            else
                r--;
        }

        return maxArea;
    }
};