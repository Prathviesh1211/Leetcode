class Solution {
public:
    unordered_map<string, bool> mp;
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        int n = words.size();
        mp.clear();
        unordered_set<string> st(words.begin(), words.end());
        vector<string> ans;
        for (auto& word : words) {
            st.erase(word); // remove itself
            if (valid(st, word))
                ans.push_back(word);
            st.insert(word); // add it back
        }
        return ans;
    }

    bool valid(unordered_set<string>& st, string s) {
        int n = s.size();
        if (mp.find(s) != mp.end()) {
            return mp[s];
        }
        for (int i = 1; i < n; i++) {
            string left = s.substr(0, i);
            string right = s.substr(i);
            if (st.count(left)) {
                if (st.count(right) || valid(st, right)) {
                    mp[s] = true;
                    return true;
                }
            }
        }
        mp[s] = false;
        return false;
    }
};