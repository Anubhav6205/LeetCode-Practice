/*Given two 0-indexed integer arrays nums1 and nums2, return a list answer of size 2 where:

answer[0] is a list of all distinct integers in nums1 which are not present in nums2.
answer[1] is a list of all distinct integers in nums2 which are not present in nums1.
Note that the integers in the lists may be returned in any order.*/
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        int i;
    unordered_map<int, int> mp1, mp2;
    for (i = 0; i < nums1.size(); i++)
    {
        mp1[nums1[i]] = 1;
    }
    for (i = 0; i < nums2.size(); i++)
    {
        mp2[nums2[i]] = 1;
    }
    vector<int> first, second;
    for (auto it:mp1)
    {
        if (!mp2[it.first])
        {
            first.push_back(it.first);
        }
    }
    for (auto it:mp2)
    {
        if(!mp1[it.first])
        {
            second.push_back(it.first);
        }
    }

        vector<vector<int>> ans;
    ans.push_back(first);
    ans.push_back(second);
        return ans;
        
    }
};