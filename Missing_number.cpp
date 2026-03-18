//Optimal solution
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int xor1 = 0, xor2 = 0;
//         int n = nums.size();
//         for (int i = 0; i < n; i++) {
//             xor2 = xor2 ^ nums[i];
//             xor1 = xor1 ^ (i+1);
//         }
//         return xor1 ^ xor2;
//     }
// };

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int s2=0;
        int sum = n*(n + 1) / 2;
        for (int i = 0; i < n; i++) {
            s2 += nums[i];
        }
        int mis = sum - s2;
        return mis;
    }
};