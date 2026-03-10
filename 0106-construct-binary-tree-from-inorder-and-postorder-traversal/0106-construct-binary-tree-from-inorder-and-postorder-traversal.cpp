/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* fn(vector<int>& in, vector<int>& po, int& ind, int s, int e,
                 unordered_map<int, int>& mpp) {
        if (ind < 0 || s > e) {
            return NULL;
        }
        int ele = po[ind--];
        int pos = mpp[ele];
        TreeNode* root = new TreeNode(ele);
        root->right = fn(in, po, ind, pos + 1, e, mpp);
        root->left = fn(in, po, ind, s, pos - 1, mpp);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int, int> inmap;
        for (int i = 0; i < inorder.size(); i++) {
            inmap[inorder[i]] = i;
        }
        int ind = postorder.size() - 1;
        return fn(inorder, postorder, ind, 0, inorder.size() - 1, inmap);
    }
};