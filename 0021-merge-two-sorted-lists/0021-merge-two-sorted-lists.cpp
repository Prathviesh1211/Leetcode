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
    ListNode* mergeTwoLists(ListNode* h1, ListNode* h2) {
        if (!h1 && !h2)
            return nullptr;
        if (!h1)
            return h2;
        if (!h2)
            return h1;
        ListNode* dummy = new ListNode(-1);
        ListNode* prev = dummy;
        ListNode *t1 = h1, *t2 = h2;
        while (t1 && t2) {
            if (t1->val <= t2->val) {
                prev->next = t1;
                prev = t1;
                t1 = t1->next;
            } else {
                prev->next = t2;
                prev = t2;
                t2 = t2->next;
            }
        }
        if(t1)prev->next=t1;
        if(t2)prev->next=t2;
        return dummy->next;
    }
};