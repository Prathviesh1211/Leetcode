class Solution {
public:

    vector<int> count(string s){
        vector<int> hash(26,0);
        for(auto it:s){
            hash[it-'a']++;
        }
        return hash;
    }

    vector<int> intersection(vector<int> a,vector<int> b){
        vector<int> hash(26,0);
        for(int i=0;i<26;i++){
            hash[i]=min(a[i],b[i]);
        }
        return hash;
    }

    vector<string> commonChars(vector<string>& words) {
        vector<int> hash = count(words[0]);
        for(int i=1;i<words.size();i++){
            hash=intersection(hash,count(words[i]));
        }

        vector<string> ans;
        for(int i=0;i<26;i++){
            while(hash[i]>0){
                ans.push_back(string(1,i+'a'));
                hash[i]--;
            }
        }
        return ans;

    }
};