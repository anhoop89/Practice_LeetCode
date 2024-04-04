class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> open;
        open.push(-1);

        int count = 0;
        for (int i = 0; i < s.length(); ++i){
            if (s[i] == '(')
                open.push(i); 
            else {
                open.pop();
                if(open.empty())
                    open.push(i); 
                else
                    count = count < i - open.top() ? i - open.top():count;

            }
        }
        return count;
    }
};
