class Solution {
public:
    int hIndex(vector<int>& citations) {
        int ans=0;
        int n=citations.size();
        for(int i=n;i>=0;i--){
            int cnt=0;
            for(auto it:citations){
                if(it>=i)cnt++;
            }
            if(cnt>=i){
                ans=i;
                break;
            }
        }
        return ans;
    }
};