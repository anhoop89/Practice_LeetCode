class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int find = 0;
        // using bitwise XOR operator. 
        // imagine we have lots of seprate rooms
        // each room - one number
        // First occurance of each number will be filled in one room
        // second occurance of a number will find that room and remove it out of the room
        // at the end, the room will have only one room that have a number appearing only once. 
        for (int i = 0; i < nums.size(); i++ ) {
            cout << " find: " << find << " -- nums[i]: " << nums[i];
            find ^= nums[i];
            cout << "\n XOR result: " << find << endl;
        }

         cout << "\n final: " << find << endl;
        return find;
    }
};