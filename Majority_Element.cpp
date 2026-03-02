class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mpp ;
        int val=0;
        int rep = 0;
        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }
        for (auto it : mpp) {
            if (rep < it.second) {
                rep = it.second;
                val=it.first;
            }
        }
        return val;
    }
};