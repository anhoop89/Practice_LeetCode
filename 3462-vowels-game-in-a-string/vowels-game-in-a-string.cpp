class Solution {
public:
    bool doesAliceWin(string s) {
        unordered_set<char> vowels({'a', 'e', 'i', 'o', 'u'});

        for (auto l : s) {
            if (vowels.find(l) != vowels.end())
                return true;
        }
        return false;
    }
};