/*You are given an integer array nums (0-indexed). In one operation, you can choose an element of the array and increment it by 1.

For example, if nums = [1,2,3], you can choose to increment nums[1] to make nums = [1,3,3].
Return the minimum number of operations needed to make nums strictly increasing.

An array nums is strictly increasing if nums[i] < nums[i+1] for all 0 <= i < nums.length - 1. An array of length 1 is trivially strictly increasing.*/
class Solution {
public:
    int minOperations(vector<int>& nums) {
            int cmp=0,i,prev=nums[0];
    int add=0;
    for(i=1;i<nums.size();i++)
    {
        if(nums[i]>nums[i-1])
        {
            cout<<"1"<<endl;
            continue;
        }
        else if(nums[i]<nums[i-1])
        {
            add+=nums[i-1]-nums[i]+1;
            nums[i]=nums[i]+nums[i-1]-nums[i]+1;
       


        }
        else if(nums[i]==nums[i-1])
        {
            cout<<"3"<<endl;
            nums[i]=nums[i]+1;
            add+=1;
        }
        
    }
    for(i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<"add:"<<add;
        return add;
        
    }
};