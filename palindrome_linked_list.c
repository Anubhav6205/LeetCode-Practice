/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * 
 * Given the head of a singly linked list, return true if it is a palindrome.
 * };
 */


bool isPalindrome(struct ListNode* head){
    int count=0;
    struct ListNode *start=head;
    struct ListNode *add=head;
    struct ListNode *check=head;
    while(start!=NULL)
    {
        start=start->next;
        count++;
    }
    int arr[count];
    for(int i=count-1;i>=0;i--)
    {
        arr[i]=add->val;
        add=add->next;
    }
    for(int i=0;i<count;i++)
    {
        if(arr[i]!=check->val)
        {
            return false;
        }
        check=check->next;
        
    }
  
    return true;
    
}


//completed