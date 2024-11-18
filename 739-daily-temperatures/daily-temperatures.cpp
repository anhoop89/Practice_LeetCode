class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        // To store the result
        vector<int> output(temp.size(), 0); 

        // Stack to store indices of temperatures
        stack<int> storedTemp; 

        // Traverse through the temperatures
        for (int i = 0; i < temp.size(); i++) {
            // While stack is not empty and the current temperature is greater than
            // the temperature at the index stored in the stack
            while (!storedTemp.empty() && temp[i] > temp[storedTemp.top()]) {
                int idx = storedTemp.top();
                storedTemp.pop();
                output[idx] = i - idx;  // The difference gives the number of days
            }

            // Push the current index onto the stack
            storedTemp.push(i);
        }

        return output;
    }
};