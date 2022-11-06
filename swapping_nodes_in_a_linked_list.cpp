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
/*You are given the head of a linked list, and an integer k.

Return the head of the linked list after swapping the values of the kth node from the beginning and the kth node from the end (the list is 1-indexed).*/
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* end=head;
        ListNode* fast= head;
        ListNode* start=head;
        k--;
        while(k!=0)
        {
            fast=fast->next;
            k--;
        }
        start=fast;
        
        while(fast->next!=nullptr)
        {
            fast=fast->next;
            end=end->next;
        }
        swap(end->val,start->val);
        return head;
        
    }
};