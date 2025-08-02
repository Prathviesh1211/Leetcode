class Solution {
public:
    string reverseVowels(string s) {
       unordered_set<char> st={'a','e','i','o','u','A','E','I','O','U'};
       int left=0,right=s.size()-1;
       while(left<right){
            // if()
            if(st.find(s[left])==st.end())
                left++;
            else if(st.find(s[right])==st.end())
                right--;
            // if((st.find((s[right])!=st.end()) && (st.find(s[left])!=st.end(){
            else{
                swap(s[left],s[right]);
                left++,right--;
            }
       } 
       return s;
    }
};