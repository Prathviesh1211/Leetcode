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

    void fn(TreeNode* n,vector<int>& arr){
        if(!n)return;
        fn(n->left,arr);
        arr.push_back(n->val);
        fn(n->right,arr);
    }

    vector<int> getAllElements(TreeNode* n1, TreeNode* n2) {
        vector<int> a,b,ans;
        fn(n1,a);
        fn(n2,b);
        int i=0,j=0,n=a.size(),m=b.size();
        while(i<n && j<m){
            if(a[i]<=b[j]){
                ans.push_back(a[i++]);
            }else{
                ans.push_back(b[j++]);
            }
        }
        while(i<n){
            ans.push_back(a[i++]);
        }
        while(j<m){
            ans.push_back(b[j++]);
        }
        return ans;
    }
};