class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        unordered_map<int,int> mpp;
        mpp[0]=1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int x=sum-k;
            if(mpp.find(x)!=mpp.end()){
                cnt+=mpp[x];
            }
            mpp[sum]++;
        }
        return cnt;
    }
};