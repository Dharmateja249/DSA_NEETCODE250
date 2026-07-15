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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*temp1=list1;
        ListNode*temp2=list2;
        vector<int>nums;
        while(temp1!=NULL){
            nums.push_back(temp1->val);
            temp1=temp1->next;

        }
        while(temp2!=NULL){
            nums.push_back(temp2->val);
            temp2=temp2->next;
        }
        sort(nums.begin(),nums.end());
        ListNode *ans=new ListNode();
        ListNode*temp3=ans;
        for(int i=0;i<nums.size();i++){
            temp3->next=new ListNode(nums[i]);
            temp3=temp3->next;

        }
        return ans->next;
        
    }
};
