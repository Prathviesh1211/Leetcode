class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        // vector<int> arr;
        int i=m-1;
        int j=n-1;
        int ind=m+n-1;
        while(i>=0 && j>=0){
            if(a[i]>b[j]){
                a[ind]=a[i];
                i--,ind--;
            }else{
                a[ind]=b[j];
                j--,ind--;
            }
        }
        while(j>=0){
            a[ind--]=b[j--];
        }
    }
};