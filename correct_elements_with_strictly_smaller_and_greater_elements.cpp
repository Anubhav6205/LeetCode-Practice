/*Given an integer array nums, return the number of elements that have both a strictly smaller and a strictly greater element appear in nums.*/
class Solution {
public:
    int countElements(vector<int>& nums) {
            sort(nums.begin(), nums.end());
        int l=nums[nums.size()-1];
        int s=nums[0];
        int i,count=0;
        if(nums.size()==0 || nums.size()==1 ||nums.size()==2)
        {
            return 0;
        }
        for(i=1;i<nums.size()-1;i++)
        {
            if(nums[i]>s && nums[i]<l)
            {
                count++;
            }
            
        }
        return count;
     
        
    }
};