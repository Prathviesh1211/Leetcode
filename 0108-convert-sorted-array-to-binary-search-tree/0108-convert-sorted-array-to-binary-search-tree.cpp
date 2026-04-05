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
    TreeNode* fn(vector<int>& arr, int s, int e) {
        if (s > e)
            return nullptr;
        int mid = s + (e - s) / 2;
        TreeNode* root = new TreeNode(arr[mid]);
        root->left = fn(arr, s, mid - 1);
        root->right = fn(arr, mid + 1, e);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if (nums.empty())
            return nullptr;
        return fn(nums, 0, nums.size() - 1);
    }
};