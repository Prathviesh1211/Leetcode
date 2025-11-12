class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int cnt=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        while(i<j){
            int sum=nums[i]+nums[j];
            if(sum<target){
                cnt+=j-i;
                i++;
            }else{
                j--;
            }
        }
        return cnt;
    }
};