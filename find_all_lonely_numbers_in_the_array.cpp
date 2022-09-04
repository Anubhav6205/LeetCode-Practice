class Solution {
/*You are given an integer array nums. A number x is lonely when it appears only once, and no adjacent numbers (i.e. x + 1 and x - 1) appear in the array.

Return all lonely numbers in nums. You may return the answer in any order.*/
public:
    vector<int> findLonely(vector<int>& nums) {
        
           unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    
 
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if(mp[nums[i]]==1 && mp[nums[i]-1]==0 && mp[nums[i]+1]==0 )
        {
            ans.push_back(nums[i]);
        }
    }
        return ans;
        
    }
};