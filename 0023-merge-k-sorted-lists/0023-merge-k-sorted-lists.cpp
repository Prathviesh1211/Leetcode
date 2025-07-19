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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> arr;
        for(auto h:lists){
            while(h){
                arr.push_back(h->val);
                h=h->next;
            }
        }
        sort(arr.begin(),arr.end());
        ListNode* dummy=new ListNode(0);
        ListNode* curr=dummy;
        for(int it:arr){
            curr->next=new ListNode(it);
            curr=curr->next;
        }
        return dummy->next;
    }
};