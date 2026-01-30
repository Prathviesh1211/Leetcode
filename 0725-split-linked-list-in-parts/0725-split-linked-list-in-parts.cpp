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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k);
        if(!head)return ans;
        int len=0;
        ListNode* temp=head;
        while(temp){
            len++;
            temp=temp->next;
        }
        int dist=len/k;
        int rem=len%k;
        temp=head;
        for(int i=0;i<k;i++){
            int cnt=dist;
            if(rem>0){
                cnt+=1;
                rem-=1;
            }

            ListNode* curr=temp;
            ListNode* prev=nullptr;
            int x=0;
            while(x<cnt){
                prev=temp;
                temp=temp->next;
                x++;
            }
            if(prev)prev->next=nullptr;
            ans[i]=curr;
        }
        return ans;
    }
};