class Solution {
public:
    int maximumLength(vector<int>& A) {
        vector<int> count(2), end(2);
        // cout << count[0] << count[1] << end[0] << end[1] <<endl;
        for (int a : A) {
            count[a % 2]++;
            // cout <<  a << " | end[a % 2] :::   " << end[a % 2] << "  -- " << end[1 - a % 2] + 1 <<endl;
            end[a % 2] = max(end[a % 2], end[1 - a % 2] + 1);
        }
        return max({count[0], count[1], end[0], end[1]});
    }
};