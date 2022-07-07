class Solution {
public:
    bool hasCycle(ListNode *head) {
       ListNode* Fast=head;
       ListNode* Slow=head;
        
        if (head==NULL)
            return false;
                   
        if (head->next==NULL)
            return false;
       
       do
       {
           
           if (Fast==NULL | Fast->next==NULL || Slow==NULL || Slow->next==NULL)
               return false;
           
           if (Fast->next->next)    Fast=Fast->next->next;
           else return false;
           
           if (Slow->next) Slow=Slow->next;
           else return false;
           
       } while (Fast!=Slow);
        
        return true;
        
    } 
};