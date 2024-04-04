class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> open;
        open.push(-1); // handle the rear 

        int findMaxLen = 0;
        // 0 1 2 3 4 5 6
        // ( ) ) ( ( ) )
        // maxLen = 2 because 1 - (-1) = 2 at pos 1
        // maxLen = 4 because 6 - 2 = 4 at pos 6 

        for (int i = 0; i < s.length(); ++i){
            if (s[i] == '(')
                open.push(i); 
            else {
                open.pop();
                if(open.empty())
                    open.push(i); 
                else
                    findMaxLen = findMaxLen < i - open.top() ? i - open.top():findMaxLen;

            }
        }
        return findMaxLen;
    }
};
