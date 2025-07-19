class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char> ans;
        int n=chars.size();
        int i=0;
        while(i<n){
            char curr=chars[i];
            int cnt=0;
            while(i<n && chars[i]==curr){
                i++;
                cnt++;
            }
            ans.push_back(curr);
            
            if(cnt>1){
                string s=to_string(cnt);
                for(auto it:s){
                    ans.push_back(it);
                }
            }
        }
        chars=ans;
        return chars.size();
    }
};