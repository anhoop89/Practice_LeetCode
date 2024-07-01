class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty()) return true;
        int i = 0;
        int j = s.length() - 1 ;

        while ( i <= j) {
            cout << s[i] << " - " << i << " --- " << s[j] << " - " << j << endl;
            if (!isalnum(s[i])) {
                ++i;
                continue;
            }

            if (!isalnum(s[j])) {
                --j;
                continue;
            }

            if (i < j && tolower(s[i]) != tolower(s[j]))
                return false;

            ++i;
            --j;
        }

    
        return true;
    }

    bool check(char c) {
        if (tolower(c) >= 'a' && tolower(c) <= 'z') {
            return true;
        }
        return false;
    }
};