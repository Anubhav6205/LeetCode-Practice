
/*Given an integer array nums that does not contain any zeros, find the largest positive integer k such that -k also exists in the array.

Return the positive integer k. If there is no such integer, return -1.*/
class Solution {
public:
    int findMaxK(vector<int>& nums) {
           int mx=INT_MIN;
    unordered_map<int,int>mp;
    int i;
    for(int x:nums)
    {
        mp[x]=1;
        if(x<0&& mp[abs(x)] )
        {
            mx=max(abs(x),mx);
        }
        else if(x>0 && mp[-x])
        {
            mx=max(x,mx);


        }

    }
    if(mx==INT_MIN)
    {
        return -1;
    }
        return mx;
        
    }
};