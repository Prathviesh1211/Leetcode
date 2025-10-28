class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        int ans = 0;
        // long long mod=1e+7;
        const int mod = 1e9 + 7;

        unordered_map<int, long long> mpp;
        for (int& it : nums) {
            int rem = it - rev(it);
            ans=(ans+mpp[rem])%mod;
            mpp[rem]++;
        }
        return ans;
    }
    int rev(int n) {
        int x = n;
        int temp = 0;
        while (n) {
            int dig = n % 10;
            n /= 10;
            temp = (10 * temp) + dig;
        }
        return temp;
    }
};