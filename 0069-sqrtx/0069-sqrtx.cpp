class Solution {
public:
    int mySqrt(int x) {
        int s = 1, e = x;
        int ans = 0;
        while (s <= e) {
            long long mid = s + (e - s) / 2;
            if (mid <= x / mid) {
                ans = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
        }
        return ans;
    }
};