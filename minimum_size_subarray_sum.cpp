/*Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.*/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
          int sum = 0, k = 0, i;
    int cnt = 0, mn = INT_MAX;
    for (i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        cnt++;
        if (sum == target)
        {
            mn = min(mn, cnt);
        }

        while (sum >= target)
        {
            mn = min(mn, cnt);
            sum -= nums[k];
            k++;
            cnt--;
        }
    }
    if(mn==INT_MAX)
    {
        return 0;
    }
  
        return mn;
        
    }
};