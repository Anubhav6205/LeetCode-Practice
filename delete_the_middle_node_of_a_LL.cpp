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
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        
        int cnt=0;
        ListNode* temp=head;
        ListNode*ret=NULL;
        while(temp!=NULL)
        {
            temp=temp->next;
            cnt++;
        }
        if(cnt==1)
        {
            return ret;
        }
        cnt/=2;
        temp=head;
        cnt--;
        while(cnt--)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        ListNode* print=head;
        while(print!=NULL)
        {
            cout<<print->val;
            print=print->next;
        }
        return head;
        
        
    }
};