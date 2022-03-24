/*You are given a 0-indexed integer array nums. Rearrange the values of nums according to the following rules:

Sort the values at odd indices of nums in non-increasing order.
For example, if nums = [4,1,2,3] before this step, it becomes [4,3,2,1] after. The values at odd indices 1 and 3 are sorted in non-increasing order.
Sort the values at even indices of nums in non-decreasing order.
For example, if nums = [4,1,2,3] before this step, it becomes [2,1,4,3] after. The values at even indices 0 and 2 are sorted in non-decreasing order.
Return the array formed after rearranging the values of nums.*/
class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
            vector<int>even,odd;
    vector<int>neww;
    int i;
    for(i=0;i<nums.size();i++)
    {
        if(i%2==0)
        {
            even.push_back(nums[i]);
        }
        else
        {
            odd.push_back(nums[i]);
        }
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end(),greater<int>());
    int k=0,l=0;
    for(i=0;i<nums.size();i++)
    {
        if(i%2==0)
        {
            neww.push_back(even[k]);
            k++;
        }
        else
        {
            neww.push_back(odd[l]);
            l++;
        }
    }
        return neww;
        
    }
};