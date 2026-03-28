class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> a;
        int n = nums.size();
        for (int i = 0; i < 2*n; i++) {
            if (i < n) {
                a.push_back(nums[i]);
            }
            else{
                a.push_back(nums[i-n]);
            }
        }
        return a;
    }
};