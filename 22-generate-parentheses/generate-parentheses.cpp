class Solution {
public:
  
    vector<string> generateParenthesis(int n) {
        // need a var to save result
        vector<string> res;
        // defind the function
        function<void(int, int, string)> backTracking = [&](int open, int close, string update) {
            // if open == close == n 
            if (open == n && open == close) {
                res.push_back(update);
                return;
            }

            if (open < n) 
                backTracking(open + 1, close, update + "(");
            
            if (close < open)
                backTracking(open, close + 1, update + ")");
        };

        backTracking(0,0,"");

        return res;
    }

    
};