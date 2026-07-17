class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            int ele=-1,x=nums1[i];
            for(int j=0;j<m;j++){
                if(nums2[j]==x){
                    for(int k=j+1;k<m;k++){
                        if(nums2[k]>x){
                            ele=nums2[k];
                            break;
                        }
                    }
                }
            }
            ans[i]=ele;
        }
        return ans;
    }
};