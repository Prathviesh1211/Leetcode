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
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi=0;
        fn(root,maxi);
        return maxi;
    }

    int fn(TreeNode* n,int& maxi){
        if(!n)return 0;
        int lh=fn(n->left,maxi);
        int rh=fn(n->right,maxi);
        maxi=max(lh+rh,maxi);
        return 1+max(lh,rh);
    }
};