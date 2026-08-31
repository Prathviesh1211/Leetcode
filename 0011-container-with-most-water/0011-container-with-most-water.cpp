class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        int i=0,j=n-1;
        while(i<j){
            int water=min(arr[i],arr[j])*(j-i);
            ans=max(ans,water);
            if(arr[i]<arr[j]){
                i++;
            }else{
                j--;
            }
        }
        return ans;
    }
};