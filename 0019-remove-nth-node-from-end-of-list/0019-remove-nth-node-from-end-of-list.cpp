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
        ListNode* prev=NULL;
        ListNode* curr=h;
        while(curr){
            ListNode* temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head)return nullptr;
        head=reverse(head);
        ListNode* temp=head;
        if (n == 1) {
            ListNode* del = temp;
            head = temp->next;
            delete del;
            return reverse(head);
        }

        while (--n > 1 && temp->next) {
            temp = temp->next;
        }

        if (temp->next) {
            ListNode* del = temp->next;
            temp->next = temp->next->next;
            delete del;
        }

        // temp->next=temp->next->next;
        return reverse(head);
    }
};