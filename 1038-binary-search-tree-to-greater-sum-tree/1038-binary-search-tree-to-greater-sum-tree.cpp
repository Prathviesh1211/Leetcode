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
    TreeNode* bstToGst(TreeNode* root) {
        int sum=0;
        fn(root,sum);
        return root;
    }
    void fn(TreeNode* n,int& sum){
        if(!n)return;
        fn(n->right,sum);
        sum+=n->val;
        n->val=sum;
        fn(n->left,sum);
    }
};