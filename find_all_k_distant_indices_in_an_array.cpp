/*You are given a 0-indexed integer array nums and two integers key and k. A k-distant index is an index i of nums for which there exists at least one index j such that |i - j| <= k and nums[j] == key.

Return a list of all k-distant indices sorted in increasing order*/
class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        
    int i,j;
    vector<int>x;
    for(i=0;i<nums.size();i++)
    {
        for(j=0;j<nums.size();j++)
        {
            if(nums[j]==key)
            {
                if(abs(i-j)<=k)
                {
                    x.push_back(i);
                }
                
            }
        }
    }
    sort( x.begin(), x.end() );
    x.erase( unique( x.begin(), x.end() ), x.end() );
    return x;
    for(i=0;i<x.size();i++)
    {
        cout<<x[i]<<" ";
    }
    
        
    }
};