class Solution {
public:
    int minimumRefill(vector<int>& nums, int a, int b) {
        int cnt=0;
        int n=nums.size();
        int k1=a,k2=b;
        int i=0,j=n-1;
        while(i<=j){
            if(i==j){
                int k=max(k1,k2);
                if(k<nums[i]){
                    cnt++;
                }
                break;
            }
            if(nums[i]>k1){
                cnt++;
                k1=a;
            }
            k1-=nums[i];
            if(nums[j]>k2){
                cnt++;
                k2=b;
            }
            k2-=nums[j];
            i++,j--;

        }
        return cnt;
    }
};