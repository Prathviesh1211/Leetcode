class Solution {
public:
    int maxNumberOfBalloons(string s) {
        if (s.empty())
            return 0;
        unordered_map<char, int> need={{'b', 1}, {'a', 1}, {'l', 2}, {'o', 2},
                                      {'n', 1}};
        unordered_map<char, int> have;
        for (char c : s)
            have[c]++;
        int ans=INT_MAX;
        for(auto it:need){
            char c=it.first;
            int req=it.second;
            int freq=have[c];
            int times=freq/req;
            ans=min(ans,times);
        }
        return ans;
        
    }
};