/*Given a 2D integer array nums where nums[i] is a non-empty array of distinct positive integers, return the list of integers that are present in each array of nums sorted in ascending order.
 */
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
            int arr[10000]={0};
    vector<int>ans;
    int i,j;
    for(i=0;i<nums.size();i++)
    {
        for(j=0;j<nums[i].size();j++)
        {
            ++arr[nums[i][j]];
        }
    }
    
    for(i=0;i<10000;i++)
    {
        if(arr[i]==nums.size())
        {
            ans.push_back(i);
        }
    }
    sort(ans.begin(), ans.end());
    
    return ans;
        
    }
};