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
 * You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists in a one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

 
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *start=NULL;
        ListNode *list4;
        if(list1==NULL&&list2==NULL)
        {
            return start;
        }
        if(list1==NULL)
        {
            return list2;
            
        }
        if(list2==NULL)
        {
            return list1;
        }
        if(list1->val<list2->val)
        {
            start=list1;
            list1=list1->next;
        }
        else
        {
            start=list2;
            list2=list2->next;
        }
        list4=start;
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val<list2->val)
            {
                list4->next=list1;
                list1=list1->next;
                
            }
            else
            {
                list4->next=list2;
                list2=list2->next;
            }
            list4=list4->next;
        }
        if(list1!=NULL)
        {
        while(list1!=NULL)
        {
            
            list4->next=list1;
            list1=list1->next;
            list4=list4->next;
        }
        }
        if(list2!=NULL)
        {
            while(list2!=NULL)
            {
            list4->next=list2;
            list2=list2->next;
            list4=list4->next;
                
            }
        }
        
        
        
        return start;
        
    }
};