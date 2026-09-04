class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0;
        int n=chars.size();
        int ind=0;
        while(i<n){
            int cnt=0;
            char ch=chars[i];
            while(i<n && chars[i]==ch){
                cnt++;
                i++;
            }
            chars[ind]=ch;
            ind++;
            if(cnt>1){
                string temp=to_string(cnt);
                for(char c:temp){
                    chars[ind++]=c;
                }
            }
        }
        return ind;
    }
};