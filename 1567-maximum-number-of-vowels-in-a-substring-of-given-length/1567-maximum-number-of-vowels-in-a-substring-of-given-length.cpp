class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels{'a','e','i','o','u'};
        int cnt = 0, ans = 0;
        for(int i=0;i<k;i++){
            if(vowels.count(s[i]))cnt++;
        }
        ans=cnt;
        for(int i=k;i<s.size();i++){
            if(vowels.count(s[i]))cnt++;
            if(vowels.count(s[i-k]))cnt--;
            ans=max(cnt,ans);
        }   
        return ans;
    }
};