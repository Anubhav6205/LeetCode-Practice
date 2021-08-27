
/*You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.*/
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
    vector<int>ret;
    int count=1;
    sort(nums.begin(),nums.end());
    int i;
    for(i=0;i<nums.size()-1;i++)
    {
        if(nums[i]==nums[i+1])
        {
            ret.push_back(nums[i]);
            goto label;
        }

    }
    label:
    nums.erase(unique(nums.begin(),nums.end()),nums.end());
    for(i=0;i<nums.size()+1;i++)
    {
        if(count!=nums[i])
        {
            ret.push_back(count);
            return ret;
        }
        count++;
    }
     return ret;   
        
    }
};