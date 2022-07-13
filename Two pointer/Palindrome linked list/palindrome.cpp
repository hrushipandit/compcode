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
    
    ListNode* findmid (ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast!=NULL && fast->next!=NULL )
        {
            slow=slow->next;
            fast=fast->next;
            if (fast)
                fast=fast->next;

        }    
            return slow;      
    }
    
    ListNode* reverse (ListNode* head)
    {   ListNode* curr = head;
        ListNode* temp = NULL;
        ListNode* prev = NULL;
        
        while (curr)
        {   
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;    
        }
     return prev;
         
    }
    
    bool comparelist (ListNode* head1, ListNode* head2)
    {
        ListNode* curr1= head1;
        ListNode* curr2= head2;
        
        while (curr1!=NULL && curr2!=NULL)
        {
           // cout<<curr1->val<<curr2->val<<endl;
            if (curr1->val!=curr2->val)
                return false;

            curr1=curr1->next;
            curr2=curr2->next;
              
        }
        return true;
        
        
    }
    
    bool isPalindrome(ListNode* head) {

        ListNode* mid= findmid(head);
        ListNode* head2=reverse(mid);
        return comparelist(head,head2);
        
        
    }
};