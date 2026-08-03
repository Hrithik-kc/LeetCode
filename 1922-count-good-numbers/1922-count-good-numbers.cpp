class Solution {
public:
    const long long MOD = 1000000007;
    int countGoodNumbers(long long n) {

        long long evenv = 5;
        long long oddv = 4;
        long long evenAns = 1;
        long long oddAns = 1;
        long evennum = (n + 1) / 2;
        long oddnum = (n) / 2;
        while (evennum > 0) {
            if (evennum % 2 == 0) {
                evenv = (evenv * evenv) % MOD;
                evennum = evennum / 2;
            } else {
                evenAns = (evenv * evenAns) % MOD;
                evennum = evennum - 1;
            }
        }
        while (oddnum > 0) {
            if (oddnum % 2 == 0) {
                oddv = (oddv * oddv) % MOD;
                oddnum = oddnum / 2;
            } else {
                oddAns = (oddv * oddAns) % MOD;
                oddnum = oddnum - 1;
            }
        }
        return (evenAns * oddAns) % MOD;
    }
};