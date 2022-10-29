/*You are given an integer array nums with the following properties:

nums.length == 2 * n.
nums contains n + 1 unique elements.
Exactly one element of nums is repeated n times.
Return the element that is repeated n times*/
class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i:nums)
        {
            mp[i]++;
        }
        for(auto it:mp)
        {
            if(it.second == nums.size()/2)
            {
                return it.first;
            }
        }
        return 69;
        
    }
};