/*class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
         int j=0,i;
        for(i=0 ;i<nums.size()-1;i++)
        {
             if(nums[i]!=nums[i+1])
               {
                continue;  
               }
            if(nums[i]==nums[i+1])
            {
               nums[i] =nums[i]*2;
                nums[i+1]=0;
            }
        }
        vector<int>ans;
        int zero=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                ans.push_back(nums[i]);
            }
            else
            {
                zero++;
            }
        }
        while(zero!=0)
        {
            ans.push_back(0);
            zero--;
        }
        return ans;
        
        
    }
};*/
class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        
         int j=0,i;
        for(i=0 ;i<nums.size()-1;i++)
        {
             if(nums[i]!=nums[i+1])
               {
                continue;  
               }
            if(nums[i]==nums[i+1])
            {
               nums[i] =nums[i]*2;
                nums[i+1]=0;
            }
        }
        vector<int>ans;
        int zero=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                ans.push_back(nums[i]);
            }
            else
            {
                zero++;
            }
        }
        while(zero!=0)
        {
            ans.push_back(0);
            zero--;
        }
        return ans;
        
        
    }
};