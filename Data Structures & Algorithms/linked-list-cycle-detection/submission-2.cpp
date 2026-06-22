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
    bool hasCycle(ListNode* head) {
        ListNode*temp=head;
        unordered_set<ListNode*>seen;
        while(temp!=NULL){
            if(seen.find(temp)!=seen.end()){
                return true;
            }
            seen.insert(temp);
            temp=temp->next;

        }
        return false;
        
    }
};
