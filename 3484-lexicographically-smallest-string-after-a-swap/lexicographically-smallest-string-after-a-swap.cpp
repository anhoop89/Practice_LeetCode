class Solution {
public:
    string getSmallestString(string s) {
        string res = s; 
        for (int i = 1; i < s.length(); i++){
            if ((s[i-1] - '0') % 2 == (s[i] - '0') % 2) {
                swap(s[i-1],s[i]);
                if (s < res) 
                    return s;
                s = res;
            }
        }
        return s;
    }
};