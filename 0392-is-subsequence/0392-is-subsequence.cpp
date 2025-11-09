class Solution {
public:
    bool isSubsequence(string t, string s) {
        
        int n = s.size();
        int m = t.size();
        unordered_map<int, vector<int>> mpp;
        for (int i = 0; i < n; i++) {
            mpp[s[i]].push_back(i);
        }
            int prev = -1;
            for (int i = 0; i < t.size(); i++) {
                if(mpp.find(t[i])==mpp.end()){
                    return false; 
                }
                char c=t[i];
                vector<int> ind=mpp[c];
                auto it=upper_bound(ind.begin(),ind.end(),prev);
                if(it==ind.end()){
                    return false;
                    // break;
                };
                prev=*it;
            }
            // if(found)cnt++;
        
        return true;
    }
};
