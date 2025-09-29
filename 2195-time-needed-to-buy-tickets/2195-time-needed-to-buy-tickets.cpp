class Solution {
public:
    int timeRequiredToBuy(vector<int>& arr, int k) {
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            if(i<k){
                cnt+=min(arr[i],arr[k]);
            }else if(i==k)cnt+=arr[k];
            else{
                if(arr[i]<arr[k])cnt+=arr[i];
                else if(arr[i]>=arr[k])cnt+=arr[k]-1;
            }
        }
        return cnt;
    }
};