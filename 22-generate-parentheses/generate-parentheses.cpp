class Solution {
public:
  
    vector<string> generateParenthesis(int n) {
        // need a var to save result
        vector<string> res;
        // defind the function
        function<void(int, int, string)> result = [&](int open, int close, string update) {
            // if open == close == n 
            if (open == n && open == close) {
                res.push_back(update);
                return;
            }

            if (open < n) 
                result(open + 1, close, update + "(");
            
            if (close < open)
                result(open, close + 1, update + ")");
        };

        result(0,0,"");

        return res;
    }

    
};