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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        int count=0;
        while(temp!=nullptr){
            count++;
            temp=temp->next;
        }
        int pos=count-n;
        if (pos == 0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        
        ListNode*temp2=head;
        ListNode*prev=nullptr;
        while(temp2){
            if(pos!=0){
                prev=temp2;
                temp2=temp2->next;
                pos--;
            }
            else if(pos==0){
                prev->next=temp2->next;
                delete temp2;
                return head;

            }
        }
        return head;
    }
};
