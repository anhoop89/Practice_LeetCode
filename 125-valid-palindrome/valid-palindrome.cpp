class Solution {
public:
    bool isPalindrome(string s) {
        
        int i = 0;
        int j = s.length() - 1;
        while (i < j ){
            cout << "i " << s[i] << "  -- j: " << s[j] << endl;
            if (!isalnum(s[i])) { ++i; continue;}
            if (!isalnum(s[j])) { --j; continue;}

            if (tolower(s[i]) != tolower(s[j]))
                return false;
            
            ++i;
            --j;
        }
        return true;
    }
};