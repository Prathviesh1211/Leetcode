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
        if(!head)return NULL;
        ListNode* temp=head;
        for(int i=0;i<k;i++){
            if(!temp)return head;
            temp=temp->next;
        }
        ListNode* newh=reverse(head,temp);
        head->next=reverseKGroup(temp,k);
        return newh;
    }
private:
    ListNode* reverse(ListNode* h,ListNode* t){
        ListNode* prev=NULL;
        while(h!=t){
            ListNode* curr=h->next;
            h->next=prev;
            prev=h;
            h=curr;
        }
        return prev;
    }
};