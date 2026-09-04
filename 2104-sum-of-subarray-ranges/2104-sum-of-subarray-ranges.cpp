class Solution {
public:

    // Next Smaller Element
    vector<int> findNse(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> nse(n);

        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            if (st.empty())
                nse[i] = n;
            else
                nse[i] = st.top();

            st.push(i);
        }

        return nse;
    }

    // Previous Smaller Element
    vector<int> findPse(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> pse(n);

        for (int i = 0; i < n; i++) {

            while (!st.empty() && arr[st.top()] > arr[i]) {
                st.pop();
            }

            if (st.empty())
                pse[i] = -1;
            else
                pse[i] = st.top();

            st.push(i);
        }

        return pse;
    }

    // Next Greater Element
    vector<int> findNge(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> nge(n);

        for (int i = n - 1; i >= 0; i--) {

            while (!st.empty() && arr[st.top()] <= arr[i]) {
                st.pop();
            }

            if (st.empty())
                nge[i] = n;
            else
                nge[i] = st.top();

            st.push(i);
        }

        return nge;
    }

    // Previous Greater Element
    vector<int> findPge(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        vector<int> pge(n);

        for (int i = 0; i < n; i++) {

            while (!st.empty() && arr[st.top()] < arr[i]) {
                st.pop();
            }

            if (st.empty())
                pge[i] = -1;
            else
                pge[i] = st.top();

            st.push(i);
        }

        return pge;
    }

    long long subArrayRanges(vector<int>& arr) {

        int n = arr.size();

        vector<int> nse = findNse(arr);
        vector<int> pse = findPse(arr);

        vector<int> nge = findNge(arr);
        vector<int> pge = findPge(arr);

        long long sumMin = 0;
        long long sumMax = 0;

        for (int i = 0; i < n; i++) {

            long long leftMin = i - pse[i];
            long long rightMin = nse[i] - i;

            long long leftMax = i - pge[i];
            long long rightMax = nge[i] - i;

            long long minContribution =
                leftMin * rightMin * arr[i];

            long long maxContribution =
                leftMax * rightMax * arr[i];

            sumMin += minContribution;
            sumMax += maxContribution;
        }

        return sumMax - sumMin;
    }
};