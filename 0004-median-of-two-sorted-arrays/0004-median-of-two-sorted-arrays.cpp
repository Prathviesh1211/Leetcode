class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int n1=a.size();
        int n2=b.size();
        if(n1>n2)return findMedianSortedArrays(b,a);
        int s=0,e=n1;
        int n=n1+n2;
        while(s<=e){
            int m1=(s+e)/2;
            int m2=(n1+n2+1)/2-m1;
            int l1=INT_MIN;
            int l2=INT_MIN;
            int r1=INT_MAX;
            int r2=INT_MAX;
            if(m1<n1)r1=a[m1];
            if(m2<n2)r2=b[m2];
            if(m1-1>=0)l1=a[m1-1];
            if(m2-1>=0)l2=b[m2-1];
            if(l1<=r1 && l2<=r1){
                if(n%2==1)return max(l1,l2);
                return (double) (max(l1,l2)+min(r1,r2))/2.0;
            }else if(l1>r2) e=m1-1;
            else s=m1+1;
        }
        return 0;
    }
};