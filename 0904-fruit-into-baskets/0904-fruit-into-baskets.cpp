class Solution {
public:
    int totalFruit(vector<int>& arr) {
        int ans=0;
        int n=arr.size();
        int i=0;
        int cnt=0;

        unordered_map<int,int> mpp;

        for(int j=0;j<n;j++){
            mpp[arr[j]]++;
            while(mpp.size()>2 && i<j){
                mpp[arr[i]]--;
                if(mpp[arr[i]]==0)mpp.erase(arr[i]);
                i++;
            }
            ans=max(ans,j-i+1);
        }

        return ans;
    }
};