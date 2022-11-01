/*Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.*/*/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
            vector<vector<int>> ans;
    if (nums.size() < 3)
    {
         return ans;
    }
    int i, j;
    sort(nums.begin(), nums.end());
    unordered_map<int, int> mp;
    for (i = 0; i < nums.size(); i++)
    {
        mp[nums[i]] = i;
    }

    for (i = 0; i < nums.size() - 1; i++)
    {
        if(nums[i]>0)
        {
            break;
        }

        for (j = i + 1; j < nums.size(); j++)
        {
            int required = -1 * (nums[i] + nums[j]);
          

            if (mp.count(required) && mp.find(required)->second > j)
            {
                
                 

                ans.push_back({nums[i], nums[j], required});
                j=mp.find(nums[j])->second;
                
            }

        }
        i=mp.find(nums[i])->second;

    }
    cout << ans.size();
        return ans;
    }
};