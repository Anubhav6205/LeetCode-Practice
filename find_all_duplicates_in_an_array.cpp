/*
Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.*/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i = 0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto i : mp){
            if(i.second == 2) ans.push_back(i.first);
        }
        return ans;
    }
};