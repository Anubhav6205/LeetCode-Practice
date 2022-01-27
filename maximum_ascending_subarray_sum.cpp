/*Given an array of positive integers nums, return the maximum possible sum of an ascending subarray in nums.

A subarray is defined as a contiguous sequence of numbers in an array.

A subarray [numsl, numsl+1, ..., numsr-1, numsr] is ascending if for all i where l <= i < r, numsi < numsi+1. Note that a subarray of size 1 is ascending.

 */
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
            int sum=0,prev=-6969;
    int max=-69,i;
    for(i=0;i<nums.size();i++)
    {
        if(nums[i]>prev)
        {
         
            sum+=nums[i];
            cout<<"sum:"<<sum<<endl;
        }
        else 
        {
            cout<<"Refresh"<<endl;
            sum=nums[i];
        }
        if(sum>max)
        {
            max=sum;
        }
        prev=nums[i];
    }
    cout<<"Max:"<<max;
        return max;
        
    }
};