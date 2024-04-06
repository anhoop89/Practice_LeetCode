class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        collectParenthese(result, "", 0, 0, n);

        return result;
    }

    void collectParenthese(vector<string> & result, string collect, int openN, int closeN, int n) {
        cout << "collect: " << collect << endl;
        if (collect.length() == n*2 ) {
            result.push_back(collect);
            return;
        }

        if (openN < n) {
            collect += '(';
            collectParenthese(result, collect, openN + 1, closeN, n);
            collect.pop_back();
        }

        // after adding all the cases for open, now i need to handle for the close parentheses.
        if (closeN < openN) {
            collect += ')';
            collectParenthese(result,collect , openN, closeN + 1, n);
            collect.pop_back();

        }
    }

};

/* Note: 
This is a backtracking problem. 


*/