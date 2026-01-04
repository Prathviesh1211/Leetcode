class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        while(i<j){
            if(nums[i]+nums[j]<k){
                cnt+=(j-i);
                i++;
            }else{
                j--;
            }
        }
        return cnt;
    }
};