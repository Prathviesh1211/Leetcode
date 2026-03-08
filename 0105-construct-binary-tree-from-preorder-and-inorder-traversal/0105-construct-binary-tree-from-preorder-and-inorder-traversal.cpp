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
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int ind=0;
        unordered_map<int,int> mpp;
        for(int i=0;i<in.size();i++){
            mpp[in[i]]=i;
        }
        return fn(pre,mpp,0,pre.size()-1,ind);
    }

    TreeNode* fn(vector<int>& pre,unordered_map<int,int>& mpp,int s,int e,int& ind){
        if(ind>=pre.size() || s>e){
            return nullptr;
        }
        int ele=pre[ind++];
        int pos=mpp[ele];
        TreeNode* root=new TreeNode(ele);
        root->left=fn(pre,mpp,s,pos-1,ind);
        root->right=fn(pre,mpp,pos+1,e,ind);
        return root;
    }
};