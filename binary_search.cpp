/*Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.*/

class Solution {
public:
   int bsUtil(vector<int>& nums, int target,int l, int h) {
        if(l>h) return -1;
        int m{l + ( h-l)/2};
        if(nums[m]==target) return m;
        if(nums[m]<target) return bsUtil(nums, target, m+1, h);
        else return bsUtil(nums,target,l,m-1);
        
    }
    int search(vector<int>& nums, int target) {
        return bsUtil(nums,target,0, nums.size()-1);
    }
        
    
};//completed :(