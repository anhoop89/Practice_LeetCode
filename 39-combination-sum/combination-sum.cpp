class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    
        // result will collect all the combination results
        
        // need a vector to store all the combination
        vector<vector<int>> result; 

        //  because there's more than one result that combine to be equal to the target. 
        //  I need a helper function named findCombination to support this
        //  findCombination(result, single vector to store a current result, candidates, target, position)
        findCombination(result, {}, candidates, target, 0); 
        
        return result;
    }

    //  recursion function to find a list of the chosen numbers. 
    void findCombination(vector<vector<int>> & result, vector<int> current, vector<int>& candidates, int currTarget, int pos) {
        // base cases - 2 bases case
        // 1st base case
        if (currTarget < 0)
            return;
        // 2nd base case
        // current target == 0 means that sum of the chosen numbers - currentTarget == 0 ( matched!) adding them into the result
        if (currTarget == 0) {
            result.push_back(current);
            return;
        }   

        // need a loop to check all the candiates number that potentially matches the sum of the chosen number in the current arr
        while (pos < candidates.size()) {
            // add a number in candidates arr to the current arr for checking
            current.push_back(candidates[pos]);
            // recursive method to handle the target minus each number in candidates to find a matching combination.
            findCombination(result, current, candidates, currTarget - candidates[pos], pos); 

            //  if it's failed with the base case, it will return the previous stack. another is previous currTarget > 0 
            pos++; 
            //  remove the prevous chosen number because it doesn't qualify the sum for the currTarget
            current.pop_back();
        }
    }

};

// 
/*
this problem learns about the backtracking 
*/