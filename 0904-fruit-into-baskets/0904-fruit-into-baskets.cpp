class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> mp;
        int n = fruits.size();
        int k=2;
        int maxlen = 0;
        int j = 0;
        for (int i = 0; i < n; i++) {
            mp[fruits[i]]++;
            if (mp.size() > k) {
                while (mp.size() > k) {
                    mp[fruits[j]]--;
                    if (mp[fruits[j]] == 0) {
                        mp.erase(fruits[j]);
                    }
                    j++;
                }
            }
            if (mp.size() <= k) {
                maxlen=max(maxlen, i - j + 1);
            }
        }
        return maxlen;
    }
};