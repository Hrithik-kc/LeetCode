class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> mpp;

        int m = t.size();
        int minLen = INT_MAX;
        int str = s.size();
        int l = 0;
        int r = 0;
        int count = 0;
        int sindex = 0;

        for (int i = 0; i < m; i++) {
            mpp[t[i]]++;
        }

        while (r < str) {

            if (mpp[s[r]] > 0) {
                count++;
            }
            mpp[s[r]]--;

            while (count == m) {

                if (r - l + 1 < minLen) {
                    minLen = r - l + 1;
                    sindex = l;
                }

                mpp[s[l]]++;

                if (mpp[s[l]] > 0) {
                    count--;
                }

                l++;
            }

            r++;
        }

        if (minLen == INT_MAX) {
            return "";
        }

        return s.substr(sindex, minLen);
    }
};