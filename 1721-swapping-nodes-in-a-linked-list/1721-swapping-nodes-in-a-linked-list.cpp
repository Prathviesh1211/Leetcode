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
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head)return nullptr;
        int n=0;
        ListNode* temp=head;
        while(temp){
            n++;
            temp=temp->next;
        }
        ListNode* a=head;
        ListNode* b=head;
        for(int i=1;i<k;i++){
            a=a->next;
        }
        for(int i=1;i<n-k+1;i++){
            b=b->next;
        }
        int x=a->val;
        a->val=b->val;
        b->val=x;
        return head;
    }
};