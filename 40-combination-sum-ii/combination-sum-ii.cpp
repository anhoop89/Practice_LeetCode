class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        set<vector<int>> uniqueCombinations; // Set to store unique combinations
        sort(candidates.begin(), candidates.end());
        
        findCombination(uniqueCombinations, {}, candidates, target, 0);

        // Copy unique combinations from set to result vector
        for (const auto& combination : uniqueCombinations) {
            result.push_back(combination);
        }
        return result;
    }

    void findCombination( set<vector<int>> & result,vector<int> curr, vector<int>& candidates, int target, int pos ) {
        if (target < 0) {
            
            return;
        }
        
        if (target == 0) {
            result.insert(curr);
            return;
        }
      for (int i = pos; i < candidates.size() && candidates[i] <= target; ++i) {
            // Skip duplicates
            if (i > pos && candidates[i] == candidates[i - 1]) {
                continue;
            }
            curr.push_back(candidates[i]);
            findCombination(result, curr, candidates, target - candidates[i], i + 1); 
            curr.pop_back();
        }
    }
};