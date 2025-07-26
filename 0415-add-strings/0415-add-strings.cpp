class Solution {
public:
    string addStrings(string num1, string num2) {
        string res="";
        int carry=0,i=num1.size()-1,j=num2.size()-1;
        while(carry>0 || i>=0 || j>=0){
            int a=(i>=0)?num1[i]-'0':0;
            int c=(j>=0)?num2[j]-'0':0;
            int sum=a+c+carry;
            int dig=(sum%10);
            res+=dig+'0';
            carry=(sum/10);
            i--,j--;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};