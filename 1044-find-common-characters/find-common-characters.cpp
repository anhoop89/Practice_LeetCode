class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> result;
        if (words.empty()) return result;

        unordered_map<char, int> charCount;
        // Count occurrences of characters in the first word
        for (char c : words[0]) {
            charCount[c]++;
        }

        // Update counts based on the remaining words
        for (int i = 1; i < words.size(); ++i) {
            unordered_map<char, int> tempCount;
            for (char c : words[i]) {
                tempCount[c]++;
            }
            // Update charCount with minimum counts
            for (auto& pair : charCount) {
                pair.second = min(pair.second, tempCount[pair.first]);
            }
        }

        // Construct the result based on minimum counts
        for (auto& pair : charCount) {
            for (int i = 0; i < pair.second; ++i) {
                result.push_back(string(1, pair.first));
            }
        }

        return result;
    }
};