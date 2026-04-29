class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int sum=0;
        for(int i:nums){
            mpp[i]++;
            if(mpp[i]==1)sum+=i;
            else if(mpp[i]==2) sum-=i;
        
        }
        return sum;
    }
};