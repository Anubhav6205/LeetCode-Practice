/*Given an integer array nums of length n and an integer target, find three integers in nums such that the sum is closest to target.

Return the sum of the three integers.

You may assume that each input would have exactly one solution.*/


//important
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int i=0;
        int sec=i+1,third=nums.size()-1;
        int close=nums[0]+nums[1]+nums[2],sum=0;
        sort(nums.begin(),nums.end());
        for(i=0;i<nums.size()-2;i++)
        {
            	if(i > 0 && nums[i] == nums[i-1]) continue;
           
            
           
            sec=i+1;
            third=nums.size()-1;
            while(sec<third)
            {
            sum = nums[i]+nums[sec]+nums[third];
               
            if(sum==target)
            {
                return sum;
            }
           
            if(abs(target-close)>abs(target-sum))
            {
                close=sum;
            }
            if(sum<target)
            {
                
                sec++;;
            }
            else if(sum>target)
            {

                third--;
            }
            }
            
            
            
        }
        
        return close;
        
    }
};