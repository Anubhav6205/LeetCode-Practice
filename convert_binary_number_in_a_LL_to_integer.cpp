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
 * Given head which is a reference node to a singly-linked list. The value of each node in the linked list is either 0 or 1. The linked list holds the binary representation of a number.

Return the decimal value of the number in the linked list.

 
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string num="";
        int sum=0;
        while(head !=NULL)
        {
            num+=to_string(head->val);
            head=head->next;
        }
        int z=0;
        for(int i=num.length()-1;i>=0;i--)
        {
            sum+=(num[i]-'0')* pow(2,z);
            z++;
            
        }
        
        
        
        return sum;
        
    }
};