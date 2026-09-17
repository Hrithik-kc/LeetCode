class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0;
        int j = 0;
        unordered_map<char, int> mp;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
            while (mp[s[i]] > 1) {
                mp[s[j]]--;
                if (mp[s[j]] == 0) {
                    mp.erase(s[j]);
                }
                j++;
            }
            count = max(count, i - j + 1);
        }
        return count;
    }
};