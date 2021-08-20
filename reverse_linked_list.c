/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * 
 * Given the head of a singly linked list, reverse the list, and return the reversed list.
 * };
 */


struct ListNode* reverseList(struct ListNode* head)
{
    if(head==NULL)
    {
        return head;
    }
    struct ListNode *current=head->next;
    struct ListNode *prev=NULL;
    while(current!=NULL)
    {
        if(prev==NULL)
        {
            head->next=NULL;
        }
        prev=current;
        current=current->next;
        prev->next=head;
        head=prev;
    }
    return head;
    

}