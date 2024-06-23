class Solution {
public:

    // the solution is about to sorting each ele of strs and then map then into a cate
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;

        unordered_map<string, vector<string>> sorted_list; 

        for(auto s :strs) {
            // word is used to be sorted in aphabetically 
            // sorted_word  ---- list of orignial words
            string word = s;
            //sorting each element from the strs
            sort(word.begin(), word.end());
            sorted_list[word].push_back(s);
        }

        for(auto val : sorted_list) {
            result.push_back(val.second);
        }

        return result;
    } 
};