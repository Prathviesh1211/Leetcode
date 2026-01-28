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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)return NULL;
        ListNode* temp=head;
        vector<int> arr;
        while(temp){            if(temp->val!=val)arr.push_back(temp->val);
            temp=temp->next;
        }
        if(arr.empty())return NULL;
        ListNode* temp1=new ListNode(arr[0]);
        head=temp1;
        for(int i=1;i<arr.size();i++){
            ListNode* curr=new ListNode(arr[i]);
            temp1->next=curr;
            temp1=curr;
        }
        return head;
    }
};