/*You are given an integer array nums. A subsequence of nums is called a square streak if:

The length of the subsequence is at least 2, and
after sorting the subsequence, each element (except the first element) is the square of the previous number.
Return the length of the longest square streak in nums, or return -1 if there is no square streak.

A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.*/
class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        
           unordered_map<long long, long long> mp;
    if (nums.size() < 2)
    {
        return -1;
    }
    sort(nums.begin(), nums.end());
    int mx = -1;
    int cnt = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]] = 1;
    }
    for (int i = 0; i < nums.size() - 1; i++)
    {
        

        long long num = nums[i];
        while (mp[num*num]==1)
        {
            cnt++;
            num=num*num;
        }
        mx=max(mx,cnt);
        cnt=0;
    }
    if(mx==0)
    {
        return -1;
    }
        return mx+1;
    }
};