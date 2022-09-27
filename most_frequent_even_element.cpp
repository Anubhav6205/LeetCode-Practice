class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
          int mx=-1;
    unordered_map<int,int>mp;
        int num=-1;
    for(int i=0;i<nums.size();i++)
    {
        mp[nums[i]]++;
        if(nums[i]%2==0 && mp[nums[i]]>mx)
        {
            mx=mp[nums[i]];
            num=nums[i];
        }
        else if(nums[i]%2==0 && mp[nums[i]]==mx)
        {
            num=min(nums[i],num);
        }
    }
        return num;
        
    }
};