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
        ListNode*ans=new ListNode();
        ListNode*a=ans;
        ListNode*t1=list1;
        ListNode*t2=list2;
        while(t2!=NULL||t1!=NULL){
            if(t2!=NULL&&t1!=NULL&&t1->val<t2->val){
                a->next=new ListNode(t1->val);
                a=a->next;
                t1=t1->next;
            }
            else if(t2!=NULL&&t1!=NULL&&t1->val>t2->val){
                a->next=new ListNode(t2->val);
                a=a->next;
                t2=t2->next;
            }
            else if(t1==NULL&&t2!=NULL){
                a->next=new ListNode(t2->val);
                a=a->next;
                t2=t2->next;   
            }
            else{
                a->next=new ListNode(t1->val);
                a=a->next;
                t1=t1->next; 

            }
        }
        return ans->next;

        
    }
};
