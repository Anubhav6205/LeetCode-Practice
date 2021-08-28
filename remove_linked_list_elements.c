/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 * 
 * Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.
 */


struct ListNode* removeElements(struct ListNode* head, int val){
    
 struct ListNode *tmp, *tracker = head;
    if(head == NULL)
        return NULL;
    while(tracker != NULL && tracker == head && tracker->val == val){
        tracker = tracker->next;
        free(head);
        head = tracker;
    }
    while(tracker != NULL){
        if(tracker->next != NULL && tracker->next->val == val){
            tmp = tracker->next;
            tracker->next = tracker->next->next;
            free(tmp);
        }
        else
            tracker = tracker->next;
    }
    return head;


}

