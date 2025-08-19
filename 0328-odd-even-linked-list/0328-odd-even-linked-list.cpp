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
        ListNode* temp=head;
        vector<int> odd,even;
        int index = 1;
        while (temp) {
            if (index % 2 == 1) odd.push_back(temp->val);
            else even.push_back(temp->val);
            temp = temp->next;
            index++;
        }
        ListNode* dummy=new ListNode(-1);
        ListNode* curr=dummy;
        for(auto it:odd){
            curr->next=new ListNode(it);
            curr=curr->next;
        }
        for(auto it:even){
            curr->next=new ListNode(it);
            curr=curr->next;
        }
        return dummy->next;

    }
};