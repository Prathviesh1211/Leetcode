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
    void fn(TreeNode* n,int& cnt,int& k){
        if(!n || k==0)return ;
        fn(n->left,cnt,k);
        k--;
        if(k==0){
            cnt=n->val;
        }
        fn(n->right,cnt,k);
    }
    int kthSmallest(TreeNode* root, int k) {
        if(!root)return -1;
        int ans=-1;
        fn(root,ans,k);
        return ans;
    }
};