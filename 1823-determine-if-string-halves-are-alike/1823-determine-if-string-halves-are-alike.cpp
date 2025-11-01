class Solution {
public:
    bool halvesAreAlike(string s) {
        int mid=s.size()/2;
        int cnt=0;
        unordered_set<char> vowels={'a','e','i','o','u','A','E','I','O','U'};
        for(int i=0;i<mid;i++){
            char a=s[i];
            char b=s[i+mid];
            if(vowels.count(a))cnt++;
            if(vowels.count(b))cnt--;
        }
        return cnt==0;
    }
};