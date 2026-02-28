class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return bs(nums,0,n-1,target);
    }
    int bs(vector<int>& arr,int s,int e,int x){
        if(s>e)return -1;
        int mid=s+(e-s)/2;
        if(arr[mid]==x)return mid;
        else if(arr[mid]>x)return bs(arr,s,mid-1,x);
        return bs(arr,mid+1,e,x);
    }
};