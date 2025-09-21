class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=1,i=0;
        while(true){
            if(i<arr.size() && arr[i]==n)i++;
            else{
                k--;
                if(k==0)return n;
            }
            n++;
        }
        return -1;
    }
};