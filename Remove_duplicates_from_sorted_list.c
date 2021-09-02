/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * 
 * 
 * Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.
 * };
 */


struct ListNode* deleteDuplicates(struct ListNode* head){
        struct ListNode *trav=head;
        struct ListNode *ret=trav;
        struct ListNode *nn;
    if(trav==NULL)
    {
        return 0;
    }
        while(trav->next!=NULL)
        {
            if(trav->val==trav->next->val)
            {
                nn=trav->next->next;
                free(trav->next);
                trav->next=nn;    
            }
            else
            {
                trav=trav->next;
            }
        }
        return ret;

}
