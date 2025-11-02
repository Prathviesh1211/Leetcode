class Solution {
public:
    bool closeStrings(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        
        if(n1!=n2)return false;
        
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);

        for(int i=0;i<n1;i++){
            freq1[s1[i]-'a']++;
            freq2[s2[i]-'a']++;
        }

        for(int i=0;i<26;i++){
            if(freq1[i]!=0 && freq2[i]!=0)continue;
            if(freq1[i]==0 && freq2[i]==0)continue;
            return false;
        }

        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());

        return freq1==freq2;

    }
};