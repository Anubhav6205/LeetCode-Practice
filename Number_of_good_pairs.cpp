/*Given an array of integers nums, return the number of good pairs.

A pair (i, j) is called good if nums[i] == nums[j] and i < j.*/
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
            int i,j;
    int count=0;
    for(i=0;i<nums.size();i++)
    {
        for(j=i+1;j<nums.size();j++)
        {
            if(nums[i]==nums[j])
            {
                count++;
                
            }
        }
    }
        return count;
        
    }
};//completed