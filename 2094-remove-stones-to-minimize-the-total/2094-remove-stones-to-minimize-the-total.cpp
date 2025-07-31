class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> pq;
        int n=piles.size();
        int total=0;
        for(int i=0;i<n;i++){
            pq.push(piles[i]);
            total+=piles[i];
        }
        while(k--){
            int larg=pq.top();
            pq.pop();
            int remove=larg/2;
            total-=remove;
            pq.push(larg-remove);
        }
        return total;
    }
};