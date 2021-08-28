/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * 
 * 
 * 
 * };
 * 
 * Given the head of a singly linked list, return the middle node of the linked list.

If there are two middle nodes, return the second middle node.

 
 */


struct ListNode* middleNode(struct ListNode* head)
{
    int count=0,i;
    struct ListNode *move=head;
    struct ListNode *find=head;
    while(move!=NULL)
    {
        count++;
        move=move->next;
        
    }
    int mid=count/2;
    while(mid!=0)
    {
        find=find->next;
        mid--;
    }
    return find;
    


}
//completed