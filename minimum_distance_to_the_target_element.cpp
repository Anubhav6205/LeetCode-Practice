/*Given an integer array nums (0-indexed) and two integers target and start, find an index i such that nums[i] == target and abs(i - start) is minimized. Note that abs(x) is the absolute value of x.

Return abs(i - start).

It is guaranteed that target exists in nums.*/
class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
            int i;
    int min=696969696969;
    for(i=0;i<nums.size();i++)
    {
        if(nums[i]==target && abs(i-start)<min)
        {
            min=abs(i-start);
            
        }
    }
    cout<<"min:"<<min;
        return min;
        
    }
};