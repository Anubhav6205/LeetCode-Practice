/*You are given an integer array nums. The unique elements of an array are the elements that appear exactly once in the array.

Return the sum of all the unique elements of nums.

 */
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int i;
    int sum=0;
    int size=nums.size();
        if(nums.size()==1)
        {
            return nums[0];
        }
    for(i=0;i<nums.size();i++)
    {
        sum+=nums[i];
        if(i==0 && nums[i+1]==nums[i])
        {
            sum-=nums[i];
        }
        if(i==nums.size()-1 && nums[i]==nums[i-1])
        {
            sum-=nums[i];
        }
        if(i!=0 && i!= (nums.size()-1) && nums[i]== nums[i-1] || i!=0 && i!= nums.size()-1 && nums[i]==nums[i+1])
        {
            sum-=nums[i];
        }
    }
    return sum;
        
    }
};//completed