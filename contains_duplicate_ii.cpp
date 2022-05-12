class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
           int i = 0;
    unordered_map<int, int> mp;
    for (i = 0; i < nums.size(); i++)
    {
        

        if (mp[nums[i]] != 0)
        {
          
            if (i - (mp[nums[i]] - 100) <= k)
            {
                return true;
           
            }
        }
       
        mp[nums[i]] = i + 100;
       
        
    }
        return false;
        
    }
};