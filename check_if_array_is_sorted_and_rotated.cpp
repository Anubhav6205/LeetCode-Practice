/*Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

There may be duplicates in the original array.

Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length], where % is the modulo operation.

 */
class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt=0;
        int i;
        for(i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<=nums[i+1])
            {
                cnt++;
            }
        }
        if(nums[nums.size()-1] <=nums[0])
        {
            cnt++;
        }
        if(nums.size()-1 == cnt || nums.size()==cnt)
        {
            return true;
        }
        return false;
        
    }
};