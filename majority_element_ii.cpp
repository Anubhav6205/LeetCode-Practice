/*Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

 */
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
          unordered_map<int,int>mp;

    vector<int>x;
    int calc=nums.size()/3;
    for(int i=0;i<nums.size();i++)
    {
        mp[nums[i]]++;
        

    }

    for(auto it:mp)
    {
        if(it.second>calc)
        {
            x.push_back(it.first);
        }
    }
        return x;
        
    }
};