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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        fn(root,ans,0);
        return ans;
    }

    void fn(TreeNode* n,vector<int>& ans,int lvl){
        if(!n)return;
        if(ans.size()==lvl)ans.push_back(n->val);
        fn(n->right,ans,lvl+1);
        fn(n->left,ans,lvl+1);
    }

};