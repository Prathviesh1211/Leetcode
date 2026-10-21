class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0,n=s.size();
        while(i<n/2){
            swap(s[i],s[n-i-1]);
            i++;
        }
    }
};