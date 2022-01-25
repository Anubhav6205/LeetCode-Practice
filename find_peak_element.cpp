/*A peak element is an element that is strictly greater than its neighbors.

Given an integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞.

You must write an algorithm that runs in O(log n) time.*/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
            int i;
    if(nums.size()==1)
    {
        return 0;
    }
    if(nums.size()==2)
    {
        if(nums[0]>nums[1])
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if(nums.size()>2)
    {
        if(nums[0]>nums[1])
        {
            cout<<"FUCK 1"<<endl;
            return 0;
        }
        if(nums[nums.size()-1]>nums[nums.size()-2])
        {
            cout<<"FUCK 2"<<endl;
            return nums.size()-1;
        }
    for(i=1;i<nums.size()-1;i++)
    {
        if(nums[i]>nums[i+1] && nums[i]>nums[i-1])
        {
            return i;
        }
    }
    }
        cout<<"Fuck"<<endl;
        return 0;
        
    }
};