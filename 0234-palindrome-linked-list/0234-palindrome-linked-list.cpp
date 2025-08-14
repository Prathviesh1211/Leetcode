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
    bool isPalindrome(ListNode* head) {
        vector<int> arr;
        for(ListNode* temp=head;temp!=NULL;temp=temp->next){
            arr.push_back(temp->val);
        }
        vector<int> temp(arr);
        reverse(arr.begin(),arr.end());
        for(int i =0;i<arr.size();i++){
            if(arr[i]!=temp[i])return false;
        }
        return true;
    }
};