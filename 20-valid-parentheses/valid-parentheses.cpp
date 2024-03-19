class Solution {
public:
    bool isValid(string s) {
        stack<char> storingOpening ;
        // inital input
        map<char, char> parenthesesPair;
        parenthesesPair['('] = ')';
        parenthesesPair['['] = ']';
        parenthesesPair['{'] = '}';
        
        // loop for checking
        
        for (int i = 0; i < s.length(); i++) {
            char input = s[i];
            if (parenthesesPair.find(input) != parenthesesPair.end()) {
                storingOpening.push(input);
            } else {
                if ( storingOpening.empty() || parenthesesPair[storingOpening.top()] != input)
                    return false;
                storingOpening.pop();
            }
        }

        return storingOpening.empty();
    }
};


