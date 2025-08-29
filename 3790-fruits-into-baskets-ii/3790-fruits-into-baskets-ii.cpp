class Solution {
public:
    int numOfUnplacedFruits(vector<int>& a, vector<int>& b) {
        int cnt=0;
        int i=0;
        int n=a.size();
        vector<bool> used(n,false);
        for(;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i]<=b[j]){
                    b[j]=-1;
                    cnt++;
                    break;
                }
            }
        }
        return n-cnt;
    }
};