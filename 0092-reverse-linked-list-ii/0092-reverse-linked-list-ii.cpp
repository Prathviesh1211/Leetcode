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
    ListNode* reverseBetween(ListNode* head, int l, int r) {
        if(!head || l==r)return head; 

        ListNode* dummy=new ListNode(-1);
        ListNode* prev=dummy;
        dummy->next=head;
        
        for(int i=1;i<l;i++){
            prev=prev->next;
        }
        ListNode* curr=prev->next;
        ListNode* temp=NULL;
        ListNode* nextn=curr;

        for(int i=0;i<r-l+1;i++){
            ListNode* next=curr->next;
            curr->next=temp;
            temp=curr;
            curr=next;
        }

        nextn->next=curr;
        prev->next=temp;
        
        return dummy->next;

    }
};