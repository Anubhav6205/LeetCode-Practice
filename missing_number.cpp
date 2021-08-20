/*Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
          
     sort(nums.begin(),nums.end());
        int initial=nums.at(0),final=nums.at(nums.size()-1);
        int sum=0,i;
        if(nums.at(0)==1)
        {
            return 0;
        }
    
        for(i=initial;i<=final;i++)
        {
            sum=sum+i;
           
        }
        int accum=accumulate(nums.begin(),nums.end(),0);
        if(sum==accum)
        {
            return nums.at(nums.size()-1)+1;
            
        }
        else
        {
            return sum-accum;
        }
        
        
    }
};