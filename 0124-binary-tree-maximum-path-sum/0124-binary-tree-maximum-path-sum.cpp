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
    int fn(TreeNode* n, int& ans) {
        if (!n)
            return 0;
        int lh = max(0, fn(n->left, ans));
        int rh = max(0, fn(n->right, ans));
        ans = max(ans, n->val + lh + rh);
        return n->val + max(lh, rh);
    }

    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        fn(root, maxi);
        return maxi==INT_MIN?0:maxi;
    }
};