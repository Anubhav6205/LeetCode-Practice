/*Given an integer array nums, return the number of subarrays filled with 0.

A subarray is a contiguous non-empty sequence of elements within an array.*/
class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
          long long zero=0;
    int i;
    int cnt=0;
    
    nums.push_back(5);
    long long prev=0;
    for(i=0;i<nums.size();i++)
    {
        if(nums[i]==0)
        {
            prev++;
        }
        else
        {
            zero+=(prev * (prev+1))/2;
            prev=0;
           
        }

    }
    return zero;
        
    }
};