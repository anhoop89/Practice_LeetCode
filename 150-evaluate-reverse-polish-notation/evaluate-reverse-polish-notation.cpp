class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st; 
        for (const auto& c : tokens) {
            if (c == "+" || c == "-" || c == "*" || c == "/") {
                // Pop the two top elements from the stack for the operation
                int first = st.top(); st.pop();
                int second = st.top(); st.pop();

                // Perform the operation and push the result back onto the stack
                if (c == "+") {
                    st.push(second + first);
                } else if (c == "-") {
                    st.push(second - first);
                } else if (c == "*") {
                    st.push(second * first);
                } else if (c == "/") {
                    st.push(second / first);
                }
            } else {
                // Convert string to integer and push onto the stack
                st.push(stoi(c));
            }
        }
        return st.top();
    }
};