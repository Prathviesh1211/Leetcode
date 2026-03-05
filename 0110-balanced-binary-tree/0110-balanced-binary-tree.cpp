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
    int fn(TreeNode* n,bool& valid){
        if(!n)return 0;
        if(!valid)return 0;
        int lh=fn(n->left,valid);
        int rh=fn(n->right,valid);
        if(abs(lh-rh)>1)valid=false;
        return 1+max(lh,rh);
    }

    bool isBalanced(TreeNode* root) {
        if(!root)return true;
        bool valid=true;
        fn(root,valid);
        return valid==1;
    }
};