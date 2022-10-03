/*You are given a 0-indexed, strictly increasing integer array nums and a positive integer diff. A triplet (i, j, k) is an arithmetic triplet if the following conditions are met:

i < j < k,
nums[j] - nums[i] == diff, and
nums[k] - nums[j] == diff.
Return the number of unique arithmetic triplets.*/
class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int cnt=0;
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++)
    {
        mp[nums[i]]=1;
    }
    for(int i=0;i<nums.size();i++)
    {
        cout<<"here"<<endl;
        if(mp[nums[i]+diff] && mp[nums[i]+diff+diff])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
        return cnt;
        
    }
};