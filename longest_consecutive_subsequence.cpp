/*Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.*/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    unordered_map<int, int> mp;
    int i;
    for (i = 0; i < nums.size(); i++)
    {
        mp[nums[i]] = 1;
    }

    for (i = 0; i < nums.size(); i++)
    {
        if (mp.find(nums[i] - 1) != mp.end())
        {
            mp[nums[i]] = 0;
        }
    }
  

    long long mx = 0,cnt=0;
    for (i = 0; i < nums.size(); i++)
    {
        if(mp[nums[i]]==1)
        {
        int z=nums[i];
        while (mp.find(z) != mp.end())
        {
            z++;
            cnt++;
        }
        mx=max(mx,cnt);
        cnt=0;
        }
        
    }

        return mx;
        
    }
};