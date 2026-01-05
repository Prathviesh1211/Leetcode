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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        head=reverse(head);
        if (n == 1) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return reverse(head);
        }

        ListNode* temp = head;
        while (n > 2) {
            temp = temp->next;
            n--;
        }

        // Delete nth node
        ListNode* del = temp->next;
        temp->next = del->next;
        delete del;

        return reverse(head);
    }
   ListNode* reverse(ListNode* h) {
        ListNode* prev = nullptr;
        ListNode* curr = h;

        while (curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
};