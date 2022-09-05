class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
         int i;
    unordered_map<int,int>mp;
    for(i=1;i<nums.size();i++)
    {
        if(mp[nums[i]+nums[i-1]])
        {
            return true;
        }
        mp[nums[i]+nums[i-1]]=1;
  

    } 
    return false;
        
    }
};