class Solution {
public:
    int findChampion(vector<vector<int>>& mat) {
        int n=mat.size();
        for(int i=0;i<n;i++){
            bool winner=true;
            for(int j=0;j<n;j++){
                if(i==j)continue;
                if(mat[i][j]==0)winner=false;
            }
            if(winner)return i;
        }
        return -1;
    }
};