class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int> mpp;
        int max = 0;
        int val = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                mpp[nums[i]]++;
            }
        }

        for (auto it : mpp) {
            if (max < it.second) {
                max = it.second;
                val = it.first;
            }
        }
        if (max == 0) {
            val = -1;
        }
        return val;
    }
};