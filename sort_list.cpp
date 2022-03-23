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
 * Given the head of a linked list, return the list after sorting it in ascending order.
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
           vector<int>x;
    ListNode* current=head;
    
    while(current!=NULL)
    {
        x.push_back(current->val);
        current=current->next;
    }
    
    sort(x.begin(),x.end());
    
    ListNode* safe=NULL;
    current=NULL;
    
    for(int i=0;i<x.size();i++)
    {
        ListNode* temp=new ListNode(x[i]);
        if(safe==NULL)
        {
            safe=temp;
            current=safe;
        }
        else
        {
            current->next=temp;
            current=current->next;
        }
    }
    return safe;
        
    }
};