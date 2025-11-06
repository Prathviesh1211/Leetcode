class Solution {
private :
    bool freqcheck(string s){
        vector<int> hash(26,0);
        for(char c:s){
            hash[c-'a']++;
            if(hash[c-'a']>1)return true;
        }
        return false;
    }

public:
    
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size())return false;
    
        if(s==goal){
            return freqcheck(s);
        }
    
        vector<int> ind;
    
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]){
                ind.push_back(i);
            }
        }
        if(ind.size()!=2)return false;
        swap(s[ind[0]],s[ind[1]]);
        return s==goal;
    }
};