/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
            vector<int>sortt;
    sortt=nums;
    sort(sortt.begin(),sortt.end());
    int i;
    int size=nums.size();
    for(i=0;i<size-1;i++)
    {
        if(sortt[i]==sortt[i+1])
        {
            return sortt[i];
        }

    }
        return nums[i];
        
    }
};//completed