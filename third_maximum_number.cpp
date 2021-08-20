/*Given integer array nums, return the third maximum number in this array. If the third maximum does not exist, return the maximum number.

 */

class Solution {
public:
    int thirdMax(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    nums.erase(unique(nums.begin(),nums.end()),nums.end());
        if(nums.size()==1)
        {
            return nums[0];
        }
    if(nums.size()==2)
    {
    return nums[nums.size()-1];
    }
    else
    {
    return nums[nums.size()-3];
    }
    
        
        
    }
};