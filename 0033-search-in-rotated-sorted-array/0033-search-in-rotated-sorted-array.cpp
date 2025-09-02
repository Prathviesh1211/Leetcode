class Solution {
public:
    int fn(vector<int>& arr,int x,int s,int e){
        if(s>e)return -1;
        int mid=s+(e-s)/2;
        if(arr[mid]==x)return mid;
        if(arr[s]<=arr[mid]){
            if(x>=arr[s] && x<arr[mid]){
                return fn(arr,x,s,mid-1);
            }else return fn(arr,x,mid+1,e);
        }else { 
            if(x>arr[mid] &&x<=arr[e]){
                return fn(arr,x,mid+1,e);
            }else return fn(arr,x,s,mid-1);
        }
    }
    int search(vector<int>& nums, int target) {
        return fn(nums,target,0,nums.size()-1);
    }
};