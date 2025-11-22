/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)return ans;
        map <int,map<int,vector<int>>> mpp; 
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto p=q.front();q.pop();
            TreeNode* node=p.first;
            int v=p.second.first;
            int lvl=p.second.second;
            mpp[v][lvl].push_back(node->val);
            if(node->left)q.push({node->left,{v-1,lvl+1}});
            if(node->right)q.push({node->right,{v+1,lvl+1}});
        }
        for(auto i:mpp){
            vector<int> temp;
            for(auto j:i.second){
                sort(j.second.begin(),j.second.end());
                temp.insert(temp.end(),j.second.begin(),j.second.end());
            }
            ans.push_back(temp);
        }
        return ans;
    }
};