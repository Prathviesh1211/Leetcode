class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int ans=0;
        int i=0;
        vector<int> arr(256,0);
        for(int j=0;j<n;j++){
            if(arr[s[j]]){
                while(arr[s[j]]==1){
                    arr[s[i]]--;
                    i++;
                }
            }
            arr[s[j]]=1;
            ans=max(ans,j-i+1);
        }
        return ans;
    }
};