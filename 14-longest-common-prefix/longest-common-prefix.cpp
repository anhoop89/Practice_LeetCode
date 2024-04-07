class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int minLen = 222;
        int count = 0;
        string str;
        for (string & s : strs) {
            if (s.length() < minLen ) {
                minLen = s.length(); 
                str = s; 
            }
        }

        // Iterate over characters of the shortest string and compare with other strings
        int j = 0;

        //check each element in a string
        while (j < minLen) {
            int k = 0;

            //check each string
            while (k < strs.size()) {
                if (strs[k][j] != str[j]) {
                    return str.substr(0, count);
                }
                k++;
            }
            count++;
            j++;
        }

        return str.substr(0, count);
    }
};