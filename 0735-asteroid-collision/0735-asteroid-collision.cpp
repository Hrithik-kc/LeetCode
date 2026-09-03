class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;

        vector<int> ans;

        for (int i = 0; i < n; i++) {

            int current = asteroids[i];
            bool destroyed = false;

            while (!st.empty() && st.top() > 0 && current < 0) {

                if (st.top() < abs(current)) {

                    st.pop();
                } else if (st.top() == abs(current)) {

                    st.pop();
                    destroyed = true;
                    break;
                } else {

                    destroyed = true;
                    break;
                }
            }

            if (!destroyed) {
                st.push(current);
            }
        }

        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};