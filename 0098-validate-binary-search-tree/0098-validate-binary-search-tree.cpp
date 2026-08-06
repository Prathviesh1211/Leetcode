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
    bool isValidBST(TreeNode* root) {
        return fn(root,LONG_MIN,LONG_MAX);
    }

    bool fn(TreeNode* n,long low,long high){
        if(!n)return 1;
        if(n->val>=high || n->val<=low)return false;
        return fn(n->left,low,n->val) && fn(n->right,n->val,high);
    }
};