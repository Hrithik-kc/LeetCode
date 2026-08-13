class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) { 
        int pos = 0, neg = 1;
        int n = nums.size();
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                arr[pos] = nums[i];
                pos += 2;
            } else {
                arr[neg] = nums[i];
                neg += 2;
            }
        }
        return arr;
    }
};