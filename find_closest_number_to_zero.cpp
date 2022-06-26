/*Given an integer array nums of size n, return the number with the value closest to 0 in nums. If there are multiple answers, return the number with the largest value.*/
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
            int i;
    int min=INT_MAX;
    int save;
    for(i=0;i<nums.size();i++)
    {
        if(abs(nums[i]-0)<min)
        {
            save=nums[i];
            min=abs(nums[i]-0);

        }
        if(abs(nums[i]-0)==min)
        {
            if(nums[i]>save)
            {
                save=nums[i];
            }
            
        }
        
    }
    cout<<save;
        return save;
        
    }
};