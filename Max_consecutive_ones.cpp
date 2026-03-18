// Q.485
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int maxCount = 0 ;
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                count = count + 1;
                maxCount = max(maxCount, count);
            } else {
                count = 0;
            }
        }
        return maxCount;
    }
};