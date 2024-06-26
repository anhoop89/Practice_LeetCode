class Solution {
public:
    // bool isAnagram(string s, string t) {
    //     unordered_map<char, int> original;
    //     for (int i = 0; i < s.length(); i++) {

    //         if (original.find(s[i]) != original.end())
    //             original[s[i]]++;
    //         else
    //             original[s[i]] = 1;
    //     }
    //     // if length doesnt matching
    //     if (s.length() != t.length())
    //         return false;
        
    //     // looping in t comparing to the hashmap 
    //     for (auto c : t) {
    //         if (original.find(c) != original.end()) {
    //             if (original[c] > 0)
    //                 original[c]--;
    //             else return false;
    //         }   else return false;
    //     }
    //     return true;
    // }
// time On, space O1


    // review

    // bool isAnagram(string s, string t) {
    //     unordered_map <char, int> storedS; 

    //     if (s.length() != t.length())   return false;

    //      // Count the frequency of each character in string s
    //     for (auto val : s) {
    //         storedS[val]++;
    //     }

    //     for (auto val : t) {
    //         cout << "storedS[val]: "<< val << " "  << storedS[val];
    //         if (storedS[val] > 0)
    //         // we found it, update the count
    //             storedS[val]--;
    //         else
    //             return false;
          
    //     }

    //     return true;
    
    // }

    //3rd
    // bool isAnagram(string s, string t) {
    //     unordered_map<char, int> mp; 
    //     if (s.length() != t.length())   return false;
    //     for ( auto & val : s)
    //         mp[val]++;
        
    //     for (auto & val: t) {
    //         if (mp[val] > 0) {
    //             mp[val]--;
    //         } else
    //             return false;
    //     }
    //     return true;
    // }


    //4
    // bool isAnagram(string s, string t) {
    //     unordered_map <char, int > mp;
    //     if (s.length() != t.length()) return false;

    //     for (auto & val:s ){
    //         mp[val]++;
    //     }

    //     for (auto & val: t){
    //         if (mp[val] > 0 ){
    //             mp[val]--;
    //         } else 
    //             return false;
    //     }
    //     return true;
    // }

    //5
     bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // if (s.length() != t.length()) return false;

        // if (s != t) return false;
    
        // return true;
     
     // size for the vevtor: 26
     // initialize the vector ele: 0
     vector<int> count(26,0); 

        for (auto & val: s)
            count[val - 'a']++;
        for (auto & val: t)
            count[val - 'a']--;
        for (auto & val: count)
            // cant be equal 0
            // bc test for a and ab 
            // count[b] would be -1 
            if (val != 0)
                return false;
        return true;
     }





































/////////////////////////////////////////////////////




};



