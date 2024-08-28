class Solution {
public:
  
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        function<void(int, int, string)> result = [&](int o, int c, string update)
        {
            if (n == o && o == c) {
                res.push_back(update);
                return;
            }

            if (o < n) {
                result(o + 1, c , update + "(");
            } 

            if ( c < o) {
                result(o , c + 1, update + ")");

            }
        };

        result(0,0,"");

        return res;
    }

    
};