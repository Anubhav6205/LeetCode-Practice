/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 * 
 * Given the head of a linked list, remove the nth node from the end of the list and return its head.

 
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL || head->next==NULL)
        {
            return nullptr;
        }
         
        ListNode* slow = head;
        ListNode* fast = head;
        while (n>0)
        {
            fast=fast->next;
            n--;
        }
        
        if(fast==NULL)
        {
            return head->next;
        }
        while(fast->next!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        slow->next=slow->next->next;
        return head;
        
        
    }
};