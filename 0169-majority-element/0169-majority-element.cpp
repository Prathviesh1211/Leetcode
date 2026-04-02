class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int ele=0;
        for(int i:nums){
            if(cnt==0)ele=i;
            if(ele==i)cnt++;
            else cnt--;
        }
        return ele;
    }
};