class Solution {
public:
    void AllCombination(string digits, int k, vector<string>& ans,
                        string& ds, vector<string>& keypad) {

        if (k >= digits.size()) {
            ans.push_back(ds);
            return;
        }

        char digit = digits[k];
        int index = digit - '0';

        for (char ch : keypad[index]) {
            ds.push_back(ch);
            AllCombination(digits, k + 1, ans, ds, keypad);
            ds.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {

        vector<string> ans;
        string ds;

        if (digits.empty())
            return ans;

        vector<string> keypad = {
            "",     // 0
            "",     // 1
            "abc",  // 2
            "def",  // 3
            "ghi",  // 4
            "jkl",  // 5
            "mno",  // 6
            "pqrs", // 7
            "tuv",  // 8
            "wxyz"  // 9
        };

        AllCombination(digits, 0, ans, ds, keypad);

        return ans;
    }
};