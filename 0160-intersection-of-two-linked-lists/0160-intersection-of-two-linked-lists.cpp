/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getIntersectionNode(ListNode *h1, ListNode *h2) {
        if(!h1 || !h2)return nullptr;
        ListNode* t1=h1,* t2=h2;
        while(t1!=t2){
            if(t1==t2)return t1;
            t1=!t1?h2:t1->next;
            t2=!t2?h1:t2->next;
        }
        return t1;
    }
};