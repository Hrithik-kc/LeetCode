class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> a;
        vector<int> b;
        vector<int> c;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                a.push_back(nums[i]);
            }
            if (nums[i] == 1) {
                b.push_back(nums[i]);
            }
            if (nums[i] == 2) {
                c.push_back(nums[i]);
            }
        }
        a.insert(a.end(), b.begin(), b.end());
        a.insert(a.end(), c.begin(), c.end());
        nums=a;
        
    }
    
};