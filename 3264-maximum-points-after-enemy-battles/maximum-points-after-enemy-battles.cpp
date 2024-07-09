class Solution {
public:
    // this approach: nlogn
    long long maximumPoints(vector<int>& e, int c) {
        // e = enemyEnergies, c = currentEnergy; 
        // sorting to find the minimum 
        long long p = 0;
        sort(e.begin(), e.end());
        int first = e[0]; 
        if (c < first) return 0;
        for (int i = e.size(); i >0; ){
           if (c >= first) { 
                p += c / first; // total point
                c = c % first; // remainder
            } else 
             {
                c += e[--i];
             }
            
        }
        return p;
    }
};            