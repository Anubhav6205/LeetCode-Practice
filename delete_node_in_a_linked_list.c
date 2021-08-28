/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * 
 * Write a function to delete a node in a singly-linked list. You will not be given access to the head of the list, instead you will be given access to the node to be deleted directly.

It is guaranteed that the node to be deleted is not a tail node in the list.
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode *trav=node->next;
    node->val=node->next->val;
    node->next=trav->next;
    free(trav);
    
    
}
//completed