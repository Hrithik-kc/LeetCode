class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
        int right = arr.size() - 1;
        while (low < right) {
            int mid = (low + right) / 2;
            if (arr[mid] < arr[mid + 1]) {
                low = mid + 1;
            } else {
                right = mid;
            }
        }
        return right;
    }
};