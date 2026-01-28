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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)return nullptr;
        ListNode* temp=head;
        set<int> st;
        while(temp){
            st.insert(temp->val);
            temp=temp->next;
        }
        if(st.empty())return nullptr;
        vector<int> arr(st.begin(),st.end());
        ListNode* curr=new ListNode(arr[0]);
        head=curr;
        for(int i=1;i<arr.size();i++){
            ListNode* next=new ListNode(arr[i]);
            curr->next=next;
            curr=next;
        }
        return head;


    }
};