class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxarea = 0;
        int nse, pse;
        int element;
        stack<int> st;
        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[st.top()] > heights[i]) {
                element = st.top();
                st.pop();
                nse = i;
                if (st.empty()) {
                    pse = -1;
                } else {
                    pse = st.top();
                }
                maxarea = max(heights[element] * (nse - pse - 1), maxarea);
            }
            st.push(i);
        }
        while (!st.empty()) {
            nse = n;
            element = st.top();
            st.pop();
            if (st.empty()) {
                pse = -1;
            } else {
                pse = st.top();
            }
            maxarea = max(heights[element] * (nse - pse - 1), maxarea);
        }
        return maxarea;
    }
};