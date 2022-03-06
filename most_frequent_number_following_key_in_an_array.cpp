/*You are given a 0-indexed integer array nums. You are also given an integer key, which is present in nums.

For every unique integer target in nums, count the number of times target immediately follows an occurrence of key in nums. In other words, count the number of indices i such that:

0 <= i <= n - 2,
nums[i] == key and,
nums[i + 1] == target.
Return the target with the maximum count. The test cases will be generated such that the target with maximum count is unique.*/
class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
            int arr[5000]={0},next,max=0,i;
        int biggest=0;
    for(i=0;i<nums.size()-1;i++)
    {
        next=nums[i+1];
        if(nums[i]==key)
        {
            ++arr[next];
            if(arr[next]>max)
            {
                max=arr[next];
                biggest=next;
               
               
            }
              
           
        }

    }
 
        return biggest;
        
    }
};