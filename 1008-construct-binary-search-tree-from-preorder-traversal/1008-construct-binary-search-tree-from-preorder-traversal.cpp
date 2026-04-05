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
    TreeNode* fn(vector<int>& p,int low,int high,int& i){
        if(i>=p.size())return NULL;
        if(p[i]<low || p[i]>high)return NULL;
        TreeNode* root=new TreeNode(p[i]);
        i++;
        root->left=fn(p,low,root->val,i);
        root->right=fn(p,root->val,high,i);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& p) {
        int ind=0;
        return fn(p,INT_MIN,INT_MAX,ind);
    }
};