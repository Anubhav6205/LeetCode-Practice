//////////*Given an array nums of size n, return the majority element.

/*The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.*/

class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
            int i,j;
   
    int max=0;
    int prev;
    sort(nums.begin(),nums.end());
    int count=1,countnum=nums[0];
    for(i=1;i<nums.size();i++)
    {
        if(nums[i-1]==nums[i])
        {
            count++;
            if(max<=count)
            {
                max=count;
                countnum=nums[i];

            }

            
        }
        else
        {
            count=0;
           
        }

    }
        return countnum;
        
        
    }
};//completed