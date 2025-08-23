class Solution {
public:
    bool isVowel(char c){
        return (c=='a' || c=='e' || c=='o' || c=='i' || c=='u');
    }

    int maxVowels(string s, int k) {
        int ans=0;
        int cnt=0;
        for(int i=0;i<=s.size()-1;i++){
            if(isVowel(s[i]))cnt++;
            if(i>=k){
                if(isVowel(s[i-k]))cnt--;
            }
            if(i>=k-1)ans=max(cnt,ans);
        }
        return ans;
    }
};