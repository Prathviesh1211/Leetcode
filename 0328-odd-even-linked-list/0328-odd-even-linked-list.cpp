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
    ListNode* oddEvenList(ListNode* head) {
        if(!head)return NULL;
        if(!head->next)return head;
        ListNode* h1=head;
        ListNode* h2=head->next;
        ListNode* t1=h1;
        ListNode* t2=h2;
        while(h1->next && h2->next){
            ListNode* n1=h1->next->next;
            ListNode* n2=h2->next->next;
            h1->next=n1;
            h2->next=n2;
            h1=n1;
            h2=n2;
        }
        h1->next=t2;
        return t1;
    }
};