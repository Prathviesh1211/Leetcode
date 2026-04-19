/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    ListNode* head;

    int getSize(ListNode* head) {
        int cnt = 0;
        while (head) {
            cnt++;
            head = head->next;
        }
        return cnt;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        this->head=head;
        int n=getSize(head);
        return fn(0,n-1);
    }
    TreeNode* fn(int s,int e){
        if(s>e)return nullptr;
        int mid=s+(e-s)/2;
        TreeNode* left = fn(s, mid - 1);
        TreeNode* root=new TreeNode(head->val);
        root->left=left;
        head=head->next;
        root->right=fn(mid+1,e);
        return root;
    }
};