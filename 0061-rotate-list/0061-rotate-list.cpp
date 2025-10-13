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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || k==0)return head;
        // ListNode* temp=head;
        // int len=1;
        // while(temp->next){
        //     len++;
        //     temp=temp->next;
        // }
        // int cnt=len-k;
        vector<int> arr;
        ListNode* temp=head;
        while(temp){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int n = arr.size();
        k = k % n;
        if(k == 0) return head;
        // ListNode* dummy=new ListNode(-1);
        // ListNode* prev=dummy;
        temp=head;
        for(int i=n-k;i<n;i++){
            temp->val=arr[i];
            temp=temp->next;
        }
        for(int i=0;i<n-k;i++){
            temp->val=arr[i];
            temp=temp->next;
        }
        return head;

    }
};