/*Given a 0-indexed integer array nums of size n, find the maximum difference between nums[i] and nums[j] (i.e., nums[j] - nums[i]), such that 0 <= i < j < n and nums[i] < nums[j].

Return the maximum difference. If no such i and j exists, return -1.*?

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        
        int mini=INT_MAX;
        int maxi=INT_MIN,i;
        for(int i=0;i<nums.size();i++)
        {
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]-mini);
        }
        if(maxi<=0)
        {
            return -1;
        }
        return maxi;
        
        
    }
};