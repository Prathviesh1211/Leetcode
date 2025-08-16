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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len=0;
        ListNode* curr=head;
        while(curr){
            curr=curr->next;
            len++;
        }
        int pos=len-n;
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* prev=dummy;
        for(int i=0;i<pos;i++){
            prev=prev->next;
        }
        ListNode* temp=prev->next;
        prev->next=prev->next->next;
        delete temp;
        return dummy->next;
    }
};