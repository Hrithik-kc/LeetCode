class Solution {
public:
    void RecCombination(int ind, vector<int>& candidates, int target,
                        vector<vector<int>>& ans, vector<int>& ds) {
        if (ind == candidates.size()) {
            if (target == 0) {
                ans.push_back(ds);
            }
            return;
        }

        if (candidates[ind] <= target) {
            ds.push_back(candidates[ind]);
            RecCombination(ind, candidates, target - candidates[ind], ans, ds);
            ds.pop_back();
        }

        RecCombination(ind + 1, candidates, target, ans, ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(), candidates.end());
        RecCombination(0, candidates, target, ans, ds);
        return ans;
    }
};