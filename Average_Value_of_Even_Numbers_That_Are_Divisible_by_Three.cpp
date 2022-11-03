/*Given an integer array nums of positive integers, return the average value of all even integers that are divisible by 3.

Note that the average of n elements is the sum of the n elements divided by n and rounded down to the nearest integer.*/*/
class Solution {
public:
    int averageValue(vector<int>& nums) {
         int cnt=0,sum=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]%2==0 && nums[i]%3==0)
        {
            cnt+=1;
            sum+=nums[i];
        }
    }
        if(cnt==0)
        {
            return 0;
        }
    return sum/cnt;
        
    }
};