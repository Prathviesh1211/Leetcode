class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                int k=j+1;
                while(k<n){
                    if(nums[i]+nums[j]>nums[k]){
                        cnt++;
                    }
                    k++;
                }
            }
        }
        return cnt;
    }
};