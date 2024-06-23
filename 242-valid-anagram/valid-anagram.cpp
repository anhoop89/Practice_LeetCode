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
        // if length doesnt matching
        if (s.length() != t.length())
            return false;
        
        // looping in t comparing to the hashmap 
        for (auto c : t) {
            if (original.find(c) != original.end()) {
                if (original[c] > 0)
                    original[c]--;
                else return false;
            }   else return false;
        }
        return true;
    }
};