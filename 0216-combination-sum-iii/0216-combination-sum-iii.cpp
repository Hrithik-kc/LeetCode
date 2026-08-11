class Solution {
public:
    void AllCombination(int i, int k, int n, vector<vector<int>>& ans,
                        vector<int>& ds) {
        

        if (ds.size() == k) {
            if (n == 0) {
                ans.push_back(ds);
               
            }
             return;
        }

        if (i > 9)
            return;
            
        if (i <= n) {
                ds.push_back(i);
                AllCombination(i + 1, k, n - i, ans, ds);
                ds.pop_back();
            
        }
        AllCombination(i + 1, k, n, ans, ds);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> ds;
        AllCombination(1, k, n, ans, ds);
        return ans;
    }
};