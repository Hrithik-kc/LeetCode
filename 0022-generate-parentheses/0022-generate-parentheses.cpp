class Solution {
public:
    int openN = 0;
    int closeN = 0;
    vector<string> ans;
    string res;
    void backtracking(int openN, int closeN, int n) {
        if (openN == n && closeN == n) {
            ans.push_back(res);
            return;
        }
        if (openN < n) {
            res.push_back('(');
            backtracking(openN + 1, closeN, n);
            res.pop_back();
        }
        if (closeN < openN) {
            res.push_back(')');
            backtracking(openN, closeN + 1, n);
            res.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        backtracking(0, 0, n);
        return ans;
    }
};