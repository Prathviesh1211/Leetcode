class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int curr=nums[i];
            int cnt=1;
            if(find(ans.begin(),ans.end(),curr)!=ans.end())continue;
            for(int j=i+1;j<n;j++){
                if(nums[j]==curr)cnt++;
            }
            if(cnt>n/3)ans.push_back(curr);
        }
        return ans;
    }
};