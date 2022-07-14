ListNode* deleteDuplicates(ListNode* head) {
ListNode *traverse=head,*nex;
        while(traverse!=NULL && traverse->next!=NULL)
        {
            if(traverse->val==traverse->next->val)
            {
                nex=traverse->next;
                traverse->next=nex->next;
                delete nex;
            }
            else
                traverse=traverse->next;
        }
        return head;
    }