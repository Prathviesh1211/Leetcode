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
        ListNode* p=nullptr;
        ListNode* curr=h;
        while(curr){
            ListNode* temp=curr->next;
            curr->next=p;
            p=curr;
            curr=temp;
        }
        return p;
    }

    bool isPalindrome(ListNode* head) {
        // vector<int> arr;
        // ListNode* temp=head;
        if(!head || !head->next)return head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next && fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* newh=reverse(slow->next);
        ListNode* t1=head;
        ListNode* t2=newh;
        while(t2){
            if(t1->val!=t2->val){
                reverse(newh);
                return false;
            }
            t1=t1->next;
            t2=t2->next;
        }
        reverse(newh);
        return true;
    }
};