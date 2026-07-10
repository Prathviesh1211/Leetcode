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
        if(!head)return nullptr;
        ListNode* dummy=new ListNode(-1);
        ListNode* fast=head,*slow=dummy;
        dummy->next=head;
        while(n--){
            fast=fast->next;
        }
        while(fast){
            fast=fast->next;
            slow=slow->next;
        }
        ListNode* del=slow->next;
        slow->next=del->next;
        delete del;
        return dummy->next;
    }
};