/*Given a 0-indexed integer array nums, find the leftmost middleIndex (i.e., the smallest amongst all the possible ones).

A middleIndex is an index where nums[0] + nums[1] + ... + nums[middleIndex-1] == nums[middleIndex+1] + nums[middleIndex+2] + ... + nums[nums.length-1].

If middleIndex == 0, the left side sum is considered to be 0. Similarly, if middleIndex == nums.length - 1, the right side sum is considered to be 0.

Return the leftmost middleIndex that satisfies the condition, or -1 if there is no such index.*/

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
            int sum1,sum2,i=1,index=99999;
        if(nums.size()==1)
        {
            return 0;
        }
    int z=accumulate(nums.begin()+1,nums.end(),0);
    if(z==0)
    {
        return 0;
    }
/*
    z=accumulate(nums.begin(),nums.end()-1,0);
    if(z==0)*/
    while(i<nums.size())
    {
    sum1=accumulate(nums.begin(),nums.begin()+i,0);
    sum2=accumulate(nums.begin()+i+1,nums.end(),0);
         cout<<"Sum1 : "<<sum1<<" Sum2 : "<<sum2<<endl; 
    if(sum1==sum2)
    {
        index=i;
        goto label;
    }
    
    i++;
    }
    label:
    if(index==99999)
    {
        cout<< " MINUS ONE"<<endl;
        return -1;
    }
    else
    {
       cout<<" INDEX : "<<index<<endl;
        return index;
    }
        
    }
};