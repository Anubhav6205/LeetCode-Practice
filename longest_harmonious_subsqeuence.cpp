/*We define a harmonious array as an array where the difference between its maximum value and its minimum value is exactly 1.

Given an integer array nums, return the length of its longest harmonious subsequence among all its possible subsequences.

A subsequence of array is a sequence that can be derived from the array by deleting some or no elements without changing the order of the remaining elements.*/
class Solution {
public:
    int findLHS(vector<int>& nums) {
          unordered_map<int,int>mp;
    int i;
    for(auto &num : nums){ //for(int i=0;i<nums.size(;i++))   
    //first = 1  second = 1
    //first = 2  second = 3
    //first = 3  second = 2
    //first = 5  second = 1
    //first = 7  second = 1
            mp[num]++;
        }
    int maxx=0;
    

    for(auto iterator: mp) 
    {
        if(mp.find(iterator.first-1)!=mp.end())
        {
            maxx=max(maxx,mp[iterator.first]+mp[iterator.first -1]);

        }
       
    }
    cout<<maxx;
        return maxx;
        
    }
};