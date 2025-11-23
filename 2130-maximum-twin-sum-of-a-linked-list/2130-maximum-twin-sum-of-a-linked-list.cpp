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
    int pairSum(ListNode* head) {
        int ans=0;
        if(!head)return ans;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* newh=reverse(slow);
        // slow->next=nullptr;
        slow=head;
        fast=newh;
        // int sum=0;
        while(fast){
            int sum=slow->val + fast->val;
            ans=max(sum,ans);
            slow=slow->next;
            fast=fast->next;
        }
        // slow->next=reverse(newh);
        return ans;
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