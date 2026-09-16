class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {

        int n = triangle.size();
        for (int i = n - 2; i >= 0; i--) {
            for (int j = 0; j <= i; j++) {
                long long right = triangle[i + 1][j];
                long long left = triangle[i + 1][j + 1];
                int smaller = min(right, left);
                triangle[i][j] = triangle[i][j] + smaller;
            }
        }
        return triangle[0][0];
    }
};