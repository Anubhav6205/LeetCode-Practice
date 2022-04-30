/*You are given a 0-indexed integer array nums. An index i is part of a hill in nums if the closest non-equal neighbors of i are smaller than nums[i]. Similarly, an index i is part of a valley in nums if the closest non-equal neighbors of i are larger than nums[i]. Adjacent indices i and j are part of the same hill or valley if nums[i] == nums[j].

Note that for an index to be part of a hill or valley, it must have a non-equal neighbor on both the left and right of the index.

Return the number of hills and valleys in nums.

*/
class Solution {
public:
    int countHillValley(vector<int>& nums) {
            int prev,left,right,i;
          left=nums[0];
        right=nums[2];
        int cnt=0;
    for(i=1;i<nums.size()-1;i++)
    {
        prev=nums[i-1];
        if(prev==nums[i]){
            right=nums[i+1];

        }
        else
        {
             left=nums[i-1];
              right=nums[i+1];
        }
        if(left<nums[i] && right<nums[i] ||left>nums[i] && right>nums[i]  )
        {
            cnt++;
        }
       
        
    }

        return cnt;
    }
};