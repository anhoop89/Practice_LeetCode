class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        vector<int> result;

        for (int i = digits.size()-1; i >= 0; --i) {
            int sum = digits[i] + carry; 
            result.push_back(sum % 10);
            // update the carry
            carry = sum / 10;
        }

            // If there is still a carry after iterating through all digits
        if (carry > 0) {
            result.push_back(carry);
        }
       
        reverse(result.begin(), result.end());
        return result;
    }
};