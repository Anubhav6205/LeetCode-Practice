/*Given an array of integers nums, you start with an initial positive value startValue.

In each iteration, you calculate the step by step sum of startValue plus elements in nums (from left to right).

Return the minimum positive value of startValue such that the step by step sum is never less than 1.

 */
class Solution {
public:
    int minStartValue(vector<int>& nums) {
    int i=0,cnt=1;
    int startval=0;
    int sum=0;
    label:
    
    for(i=0;i<nums.size();i++)
    {
        
        sum=startval+nums[i];
        if(sum<1)
        {
           
            cnt++;
       
            startval=cnt;
            i=0;
            goto label;
        }
        startval=sum;
       
    }
        return cnt;
        
    }
};