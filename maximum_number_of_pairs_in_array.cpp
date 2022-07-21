/*You are given a 0-indexed integer array nums. In one operation, you may do the following:

Choose two integers in nums that are equal.
Remove both integers from nums, forming a pair.
The operation is done on nums as many times as possible.

Return a 0-indexed integer array answer of size 2 where answer[0] is the number of pairs that are formed and answer[1] is the number of leftover integers in nums after doing the operation as many times as possible.*/
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        
         vector<int>ans;
    int same=0,diff=0;
    map<int,int>mp;
    int i;
    for(i=0;i<nums.size();i++)
    {
        mp[nums[i]]++;
    }

    for(auto it:mp)
    {
        same+=it.second/2;
        diff+=it.second%2;

    }

    ans.push_back(same);
    ans.push_back(diff);
        return ans;
        
    }
};class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        
         vector<int>ans;
    int same=0,diff=0;
    map<int,int>mp;
    int i;
    for(i=0;i<nums.size();i++)
    {
        mp[nums[i]]++;
    }

    for(auto it:mp)
    {
        same+=it.second/2;
        diff+=it.second%2;

    }

    ans.push_back(same);
    ans.push_back(diff);
        return ans;
        
    }
};