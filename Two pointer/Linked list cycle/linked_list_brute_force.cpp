class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* Curr = head;
        
        if (Curr==NULL)
            return false;
                   
        if (Curr->next==NULL)
            return false;
        
        unordered_set <int> set1; 
        while (Curr->next!=NULL)
        {
            if (set1.find(long(Curr))==set1.end())
            {
                set1.insert(long(Curr));
            }
            
            else
            {
                return true;
            }
            
            Curr=Curr->next;
        }
        
        return false;
        
    }
};