class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> original;
        for (int i = 0; i < s.length(); i++) {

            if (original.find(s[i]) != original.end())
                original[s[i]]++;
            else
                original[s[i]] = 1;
        }
        // if length doesnt mathc
        if (s.length() != t.length())
            return false;
       for (int i = 0; i < t.length(); i++) {
            if (original.find(t[i]) != original.end()) {
                if (original[t[i]] > 0) {
                    original[t[i]]--;
                    cout << "error here!!! " << t[i] << endl;
                } 
                else
                    return false;
            } 
            else
                return false;
       }
        return true;
    }
};