class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> mp{
            {']', '['},
            {'}', '{'}, 
            {')', '('}
        };

        stack<char> check; 

        for (auto val : s) {
            if (mp[val]){
                // check whether the stack is empty or 
                // the pop doesn't match with the mp result
                // return false
                if (check.empty() || check.top() != mp[val]) 
                    return false;
                check.pop();
            } else 
                check.push(val);
        }
        
    
        return check.empty(); // check.empty() return true 
    }
};