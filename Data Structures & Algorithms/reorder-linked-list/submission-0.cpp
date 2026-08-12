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
    void reorderList(ListNode* head) {
        vector<int>arr;
        ListNode*temp=head;
        while(temp!=nullptr){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int i=0;
        int j=arr.size()-1;
        vector<int>ans;
        while(i<j){
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            i++;
            j--;
        }
        if(i==j){
            ans.push_back(arr[i]);
        }
        temp=head;
        for(int i=0;i<ans.size();i++){
            temp->val=ans[i];
            temp=temp->next;
        }
        
        
        
        
    }
};
