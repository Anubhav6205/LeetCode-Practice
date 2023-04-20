class Solution {
public:
    void reve(int start,vector<int>&nums)
    {
        int i=start,j=nums.size()-1;
        while(j>i)
        {
            swap(nums[i],nums[j]);
            j--,i++;
        }
    }
    void nextPermutation(vector<int>& nums) {
        if(nums.size()<2)
        {
            return;
        }
        else
        {
        int idx=0,up=0,lw=0;
        bool found =false;
        for(int i=nums.size()-1;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
                found=true;
                idx=i;
                up=i;
                lw=i-1;
                break;
            }
            
        }
        if(!found)
        {
            reverse(nums.begin(),nums.end());
        
        }
        else
        {
            int closest=0;
            for(int i=idx;i<nums.size();i++)
            {
                if(nums[i]<=nums[up] && nums[i]>nums[lw])
                {
                    up=i;
                }
                
            }
            swap(nums[up],nums[lw]);
           reve(lw+1,nums);
            
        }
        }
    }
};