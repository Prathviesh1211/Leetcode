class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> freq(26, 0);
        int cnt=0;
        for (char& c : sentence) {
            int ind=c-'a';
            if(freq[ind]==0){
                freq[ind]++;
                cnt++;
            }
       }
       return cnt==26;
    }
};