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
private:
    void inorder(TreeNode* node,TreeNode* &curr){
        if(!node)return;
        inorder(node->left,curr);
        node->left=NULL;
        curr->right=node;
        curr=node;
        inorder(node->right,curr);
    }
public:
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy=new TreeNode(-1);
        TreeNode* curr=dummy;
        inorder(root,curr);
        return dummy->right;
    }
};