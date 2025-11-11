class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        vector<int> temp(nums.size(),0);
        for(int i=nums.size()-1;i>=0;i--){
            if(abs(nums[l])>abs(nums[r])){
                temp[i]=nums[l]*nums[l];
                l++;
            }else {
                temp[i]=nums[r]*nums[r];
                r--;
            }


        }
        return temp;
    }
};