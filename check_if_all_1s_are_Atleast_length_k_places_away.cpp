/*Given an binary array nums and an integer k, return true if all 1's are at least k places away from each other, otherwise return false*/
class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        
    
    int cnt=0;
    int save=0,i;
    for(i=0;i<nums.size();i++)
    {
        if(nums[i]==0){
            save--;
        }
        if(nums[i] ==1 && save >0)
        {
            return false;
        }
        if(nums[i]==1)
        {
            save=k;
        }

    }
        return true;
        
        
    }
};