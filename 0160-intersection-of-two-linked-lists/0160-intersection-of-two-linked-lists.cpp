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
    ListNode* getIntersectionNode(ListNode* h1, ListNode* h2) { 
        ListNode* temp=h1;
        unordered_set< ListNode *> st;
        while(temp){
            st.insert(temp);
            temp=temp->next;
        }
        temp=h2;
        while(temp){
            if(st.count(temp))return temp;
            temp=temp->next;
        }
        return nullptr;
    }
};