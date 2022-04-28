/*You are given an integer array nums consisting of 2 * n integers.

You need to divide nums into n pairs such that:

Each element belongs to exactly one pair.
The elements present in a pair are equal.
Return true if nums can be divided into n pairs, otherwise return false.*/
class Solution {
public:
    bool divideArray(vector<int>& nums) {
          int arr[5000]={0};
    int i;
    int flag=0;
    for(i=0;i<nums.size();i++)
    {
        ++arr[nums[i]];
    }
    for(i=0;i<5000;i++)
    {
        if(arr[i]!=0 && arr[i]%2!=0)
        {
            flag=1;
            goto label;
            
            
        }
        
    }
        label:
     if(flag==1)
        {
         return false;
            
        }
        else
        {
            return true;
            
        }
}
        
    
};