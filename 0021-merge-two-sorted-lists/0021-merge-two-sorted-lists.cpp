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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1)return l2;
        if(!l2)return l1;
        if(!l1 && !l2)return nullptr;
        ListNode* t1=l1,*t2=l2;
        ListNode* dummy=new ListNode(-1);
        ListNode* prev=dummy;
        while(t1 && t2){
            if(t1->val<=t2->val){
                prev->next=t1;
                t1=t1->next;
            }else{
                prev->next=t2;
                t2=t2->next;
            }
            prev=prev->next;
        }
        if(t1)prev->next=t1;
        else prev->next=t2;
        return dummy->next;
    }
};