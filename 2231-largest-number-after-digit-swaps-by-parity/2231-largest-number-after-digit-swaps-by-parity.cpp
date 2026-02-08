class Solution {
public:
    int largestInteger(int num) {
        string s = to_string(num);
        vector<char> odd,even;
        for(char c:s){
            if((c-'0')%2==1)odd.push_back(c);
            else even.push_back(c);
        }
        sort(odd.rbegin(),odd.rend());
        sort(even.rbegin(),even.rend());
        int i=0,j=0;
        for(char &c:s){
            if((c-'0')%2==0)c=even[i++];
            else c=odd[j++];
        }
        return stoi(s);
    }
};