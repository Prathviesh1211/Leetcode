class Solution {
public:
    int reversePairs(vector<int>& nums) {
        return ms(nums,0,nums.size()-1);
    }

    int merge(vector<int>& arr,int l,int m,int r){
        int cnt=0;
        int j=m+1;
        for(int i=l;i<=m;i++){
            while(j<=r && (long long)arr[i]>2LL*arr[j]){
                j++;
            }
            cnt+=(j-(m+1));
        }
        vector<int> temp;
        int i=l;
        j=m+1;
         while (i <= m && j <= r) {
            if (arr[i] <= arr[j]) {
                temp.push_back(arr[i++]);
            } else {
                temp.push_back(arr[j++]);
            }
        }

        while (i <= m) temp.push_back(arr[i++]);
        while (j <= r) temp.push_back(arr[j++]);
        for(int k=l;k<=r;k++)arr[k]=temp[k-l];
        return cnt;
    }

    int ms(vector<int>& arr,int s,int e){
        int cnt=0;
        if(s>=e)return cnt;
        int mid=(s+e)/2;
        cnt+=ms(arr,s,mid);
        cnt+=ms(arr,mid+1,e);
        cnt+=merge(arr,s,mid,e);
        return cnt;
    }
};