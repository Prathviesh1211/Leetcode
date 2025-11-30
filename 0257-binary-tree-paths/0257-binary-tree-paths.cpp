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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        string path;
        
        dfs(root, path, result);
        return result;
    }

    void dfs(TreeNode* n,string s,vector<string>& ans){
        if(!n)return;
        if(s.empty()){
            s+=to_string(n->val);
        }else{
            s+="->"+to_string(n->val);
        }
        if(!n->left && !n->right){
            ans.push_back(s);
            return;
        }
        dfs(n->left,s,ans);
        dfs(n->right,s,ans);
        s.pop_back();
    }
};