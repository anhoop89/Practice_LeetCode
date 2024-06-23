class Solution {
public:

    // the solution is about to sorting each ele of strs and then map then into a cate
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // result to store all the rearranging letter
        vector<vector<string>> outcome; 

        // method: sorting a word and group letters into a sorted word
        unordered_map<string, vector<string>> sorted_list;

        for (auto wordInput : strs) {
            string sortedWord = wordInput;
            sort(sortedWord.begin(), sortedWord.end());
            sorted_list[sortedWord].push_back(wordInput);
        }

        // since we have a hashmap , key: sortedWord, value: a list of rearranging words
        for (auto [key, val] : sorted_list) {
            outcome.push_back(val);
        }

        return outcome;

    } 
};