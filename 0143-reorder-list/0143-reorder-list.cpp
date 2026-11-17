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
    void reorderList(ListNode* head) {
        if(!head || !head->next) return;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        fast=reverse(slow->next);
        slow->next=NULL;
        slow=head;
        while(slow && fast){
            ListNode* n1=slow->next;
            ListNode* n2=fast->next;
            slow->next=fast;
            fast->next=n1;
            slow=n1;
            fast=n2;
        }        
    }
    ListNode* reverse(ListNode* h){
        ListNode* prev=nullptr;
        ListNode* curr=h;
        while(curr){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
};