class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& s1, vector<string>& s2) {
        int w1=0,w2=0;
        int n=s1.size();
        int m=s2.size();
        int i=0,j=0;
        while(w1<n && w2<m){
            if(s1[w1][i]!=s2[w2][j])return false;
            i++,j++;
            if(i==s1[w1].size()){
                i=0;
                w1++;
            }
            if(j==s2[w2].size()){
                j=0;
                w2++;
            }
        }
        return  (w1==n && w2==m);
    }
};