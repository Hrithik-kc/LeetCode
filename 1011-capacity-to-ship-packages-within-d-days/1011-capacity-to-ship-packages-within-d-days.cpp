class Solution {
public:
    bool function(int capacity, vector<int>& weights, int days) {
        int sum = 0;
        int day = 1;
        int n = weights.size();
        for (int i = 0; i < n; i++) {
            if (sum + weights[i] <= capacity) {
                sum = sum + weights[i];
            } else {
                day = day + 1;
                sum = weights[i];
            }
        }
        return day <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l = *max_element(weights.begin(), weights.end());
        int r = accumulate(weights.begin(), weights.end(), 0);
        int cap = 0;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (function(mid, weights, days)) {
                cap = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return cap;
    }
};