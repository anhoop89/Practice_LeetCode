class Solution {
public:
    int maxOperations(string s) {
        s += '1';

        int countOne = 0;

        int sumOne = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            if ( s[i] == '1')
                countOne++;
            if ( s[i] == '0' && s[i + 1] == '1')
                sumOne += countOne; 
        }
    
        return sumOne;

    }
    
};