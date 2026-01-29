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
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head)return nullptr;
        ListNode* temp=head;
        vector<int> arr;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int n=arr.size();
        swap(arr[k-1],arr[n-k]);
        ListNode* curr=new ListNode(arr[0]);
        head=curr;
        for(int i=1;i<n;i++){
            ListNode* next=new ListNode(arr[i]);
            curr->next=next;
            curr=next;
        }
        return head;
    }
};