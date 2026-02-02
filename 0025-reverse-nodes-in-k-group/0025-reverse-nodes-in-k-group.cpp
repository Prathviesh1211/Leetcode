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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || k==1)return head;
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* prev=dummy;
        ListNode* curr=head;
        while(curr){
            ListNode* kth=curr;
            for(int i=1;i<k && kth;i++){
                kth=kth->next;
            }
            if(!kth)break;
           
            ListNode* next=kth->next;
            kth->next=nullptr;
            
            ListNode* newh=reverse(curr);
            prev->next=newh;
            curr->next=next;

            prev=curr;
            curr=next;


        }
        return dummy->next;
        
    }
    ListNode* reverse(ListNode* n){
        ListNode* prev=nullptr;
        ListNode* curr=n;
        while(curr){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
};