class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        //  target % 2 =
        vector<vector<int>> result; 
       
        findCombination(result, {} ,candidates,target, 0);
        
        return result;
    }

    void findCombination(vector<vector<int>>& result, vector<int> curr, vector<int>& candidates, int target, int pos) {
        if (target == 0) {
            result.push_back(curr);
            return;
        }

        if (target < 0)
            return;
        
        while (pos < candidates.size()) {
            curr.push_back(candidates[pos]);
            findCombination(result, curr, candidates, target - candidates[pos], pos);
            pos++;
            curr.pop_back();
        }

    }
};

// 
/*
this problem learns about the backtracking 
*/