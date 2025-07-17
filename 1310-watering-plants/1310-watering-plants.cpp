class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int cap=capacity;
        int ans=0;
        int k=-1;
        for(int i=0;i<plants.size();i++){
            if(plants[i]>cap){
                ans+=2*i;
                cap=capacity;
            }
            cap-=plants[i];
            ans++;
        }
        return ans;
    }
};