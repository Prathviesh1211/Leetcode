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
    bool isPalindrome(ListNode* head) {
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* slow=dummy;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newh=reverse(slow->next);
        fast=newh;
        slow=head;
        while(fast){
            if(slow->val!=fast->val){
                reverse(newh);
                return false;
            }
            slow=slow->next;
            fast=fast->next;
        }
        reverse(newh);
        return true;

    }
};