class Solution {
public:
    string largestMerge(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        int i=0,j=0;
        string ans="";
        while(i<n && j<m){
            if(fn(s1,s2,i,j)){
                ans+=s1[i++];
            }else{
                ans+=s2[j++];
            }
        }
        while(i<n){
            ans+=s1[i++];
        }
        while(j<m){
            ans+=s2[j++];
        }
        return ans;
    }
    bool fn(string &s1,string &s2,int i,int j){
        while(i<s1.size() && j<s2.size()){
            if(s1[i]>s2[j])return true;
            if(s1[i]<s2[j])return false;
            i++,j++;
        }
        return (i!=s1.size());
    }
};