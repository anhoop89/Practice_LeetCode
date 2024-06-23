class Solution {
public:

    // the solution is about to sorting each ele of strs and then map then into a cate
    // time/space: O(nklogk)/O(nk)
    // vector<vector<string>> groupAnagrams(vector<string>& strs) {
    //     // result to store all the rearranging letter
    //     vector<vector<string>> outcome; 

    //     // method: sorting a word and group letters into a sorted word
    //     unordered_map<string, vector<string>> sorted_list;

    //     for (auto & wordInput : strs) {
    //         string sortedWord = wordInput;
    //         sort(sortedWord.begin(), sortedWord.end());
    //         sorted_list[sortedWord].push_back(wordInput);
    //     }

    //     // since we have a hashmap , key: sortedWord, value: a list of rearranging words
    //     for (auto & [key, val] : sorted_list) {
    //         outcome.push_back(val);
    //     }

    //     return outcome;

    // } 


    // optimize the solution
    // convert word to counting letters like a token
    // matching token will add words having the same letters in differnt arrangement. 
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> sorted_list;
        vector<vector<string>> result;
        for (auto s : strs) {
            cout << s <<"=========== " << endl;
            string key = getKey(s);
            cout << "key: " << key << endl;
            sorted_list[key].push_back(s);
        }

     // since we have a hashmap , key: sortedWord, value: a list of rearranging words
        for (auto & [key, val] : sorted_list ) {
            result.push_back(val);
        }

        return result;
    }

    // function to convert the words to couting letters as a token
    string getKey (string word) {
        // using vector because of counting how many times a letter appears in a word. 
        vector<int> countLetter(26,0); 
        for (int i = 0; i < word.size(); i++) {
            cout << word[i] << "   " << endl; 
            countLetter[word[i] - 'a']++;
        }

        string keyToken = "";
        for (int i = 0; i < countLetter.size(); i++) {
            keyToken += to_string(countLetter[i]) + '#';  
        }
        return keyToken;
    }

    
};