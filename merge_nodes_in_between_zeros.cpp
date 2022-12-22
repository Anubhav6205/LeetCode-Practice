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
 * You are given the head of a linked list, which contains a series of integers separated by 0's. The beginning and end of the linked list will have Node.val == 0.

For every two consecutive 0's, merge all the nodes lying in between them into a single node whose value is the sum of all the merged nodes. The modified list should not contain any 0's.

Return the head of the modified linked list.
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* forward=head->next;
        ListNode* presentt=head;
        int sum=0;
        while(forward!=NULL && forward->next!=NULL)
        {
            while(forward->val!=0)
            {
                sum+=forward->val;
                forward=forward->next;
            }
           
            presentt->val=sum;
            if(forward!=NULL && forward->next!=NULL)
            {
            presentt=presentt->next;
            }
            sum=0;
            forward=forward->next;
           
            
        }
        presentt->next=nullptr;
        
        return head;
        
        
        
        
    }
};