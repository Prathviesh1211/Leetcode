class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        long long sum=0;
        int cnt=0;
        for(int i:nums){
            sum+=i;
            if(sum>0)cnt++;
            else break;
        }
        return cnt;
    }
};