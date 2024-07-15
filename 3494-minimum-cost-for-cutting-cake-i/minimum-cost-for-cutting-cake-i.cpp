class Solution {
public:
    int minimumCost(int m, int n, vector<int>& h, vector<int>& v) {
        sort(h.rbegin(), h.rend());
        sort(v.rbegin(), v.rend());

        int hI = 0;
        int vI = 0; 
        int hP = 1;
        int vP = 1; 
        int cost = 0;

        //cut 5
        while (hI < h.size() && vI < v.size()) {
            if (h[hI] > v[vI]) {
                //cut
                cost += h[hI] * vP;
                hP++; 
                hI++; 
            } else {
                cost += v[vI] * hP;
                vP++;
                vI++; 
            }                       
        }  

        while (hI < h.size()) {
            cost += h[hI] * vP;
            hI++;
        }

        while (vI < v.size()) {
            cost += v[vI] * hP; 
            vI++;
        }

        return cost;
    }

};