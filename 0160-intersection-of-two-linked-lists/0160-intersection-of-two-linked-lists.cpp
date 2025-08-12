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
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        if(!h1 || !h2)return NULL;
        unordered_map<ListNode*,int> mpp;
        ListNode* temp=h1;
        while(temp){
            // if(mpp[temp]==1)return t1;
            mpp[temp]=1;
            temp=temp->next;
        }
        temp=h2;
        while(temp){
            if(mpp[temp]==1)return temp;
            mpp[temp]=1;
            temp=temp->next;
        }
        return NULL;
    }
};