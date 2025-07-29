class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
      vector<int> max(matrix[0].size(),INT_MIN);
      for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]>max[j]){
                max[j]=matrix[i][j];
            }
        }
      }
      for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[i][j]==-1)matrix[i][j]=max[j];   
        }
      }
      return matrix;  
    }
};