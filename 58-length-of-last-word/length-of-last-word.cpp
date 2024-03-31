class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
     
        for (int i = s.length() - 1; i >= 0 ; --i) {
            cout << "\n count COUNT : " << count << " --- " << s[i] << "   " << s.length() << endl;
            if (s[i] == ' ') {
                if (count != 0) 
                    return count; 
            } else
            count++;
            cout << "\n count : " << count << " --- " << s[i] << endl;
        }
        return count;
    }
};