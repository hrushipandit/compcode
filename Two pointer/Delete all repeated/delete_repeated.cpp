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
        ListNode* curr;
        
        if (head==NULL) return NULL;
        if (head->next) curr = head->next;
        else return head;
        ListNode* prev=head;
        
        while (curr)
        {
            if (prev->val==curr->val)
            {
                prev->next=curr->next;
                
            }
            if (curr->next && prev->val==curr->next->val)
            {
                curr=curr->next;
                continue;
            }
            
            prev=curr;
            curr=curr->next;
            
             
        }
        return head;
        
    }
};