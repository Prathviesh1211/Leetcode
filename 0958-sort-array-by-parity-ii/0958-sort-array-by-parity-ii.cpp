class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> odd,even;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==1){
                odd.push_back(nums[i]);
            }else{
                even.push_back(nums[i]);
            }
        }
        int oi=0,ei=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                nums[i]=even[ei++];
            }else{
                nums[i]=odd[oi++];
            }
        }
        return nums;
    }
};