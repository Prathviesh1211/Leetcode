class Solution {
public:
    int beautySum(string s) {
        int cnt=0;
        for(int i=0;i<s.size();i++){
            int hash[26]={0};
            for(int j=i;j<s.size();j++){
                hash[s[j]-'a']++;
                int maxf=0,minf=INT_MAX;
                for(int k=0;k<26;k++){
                    if(hash[k]>0){
                        maxf=max(maxf,hash[k]);
                        minf=min(minf,hash[k]);
                    }
                }
                cnt+=maxf-minf;
            }
        }
        return cnt;
    }
};