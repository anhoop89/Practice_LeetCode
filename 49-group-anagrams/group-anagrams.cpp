class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // tryna group by their token key fomarting like 
        // 1#0#0#1# means 1a 0b 0c 1d ...
        // group in a hashmap
        unordered_map <string, vector<string>> mp;
        vector<vector<string>> res; 
        for (auto & val : strs) {
            string token = getKey(val);
            mp[token].push_back(val);
        }

        for (auto & [key, val] : mp) {
           res.push_back(val);
        }

        return res;
    }

    string getKey(string word) {
        vector<int> count(26,0);
        for (auto & letter: word) {
            count[letter - 'a']++;
        }

        string key; 
        for (auto & val : count){
            key += to_string(val) + '#';
        }
        return key;
    }
};