class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        bool remain = false; 
        int sizeA = a.length() - 1;
        int sizeB = b.length() - 1;
        
        // Start from the end of both strings
        while (sizeA >= 0 || sizeB >= 0 || remain) {
            // Take care of remainders from previous additions
            int sum = remain ? 1 : 0;
            
            // Add the current digits from both strings
            if (sizeA >= 0) {
                sum += a[sizeA] - '0';
                sizeA--;
            }
            if (sizeB >= 0) {
                sum += b[sizeB] - '0';
                sizeB--;
            }
            
            // Append the sum modulo 2 to the result
            result.push_back((sum % 2) + '0');
            
            // Update the carry
            remain = sum > 1;
        }
        
        // Reverse the result to get the correct binary addition
        reverse(result.begin(), result.end());
        
        return result;
    }
};
