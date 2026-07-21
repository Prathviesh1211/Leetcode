class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans="";
        stack<char> st;
        for(char c:num){
            while(!st.empty() && k>0 &&  st.top()-'0'>c-'0'){
                st.pop();
                k--;
            }
            st.push(c);
        }
        while(k--){
            st.pop();
        }
        if(st.empty())return "0";
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        while(!ans.empty() && ans.back()=='0'){
            ans.pop_back();
        }
        if(ans.empty())return "0";
        reverse(ans.begin(),ans.end());
        return ans;
    }
};