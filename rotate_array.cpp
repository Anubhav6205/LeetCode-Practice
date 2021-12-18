/*Given an array, rotate the array to the right by k steps, where k is non-negative.*/  

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        reverse(nums.begin(),nums.end());
        k=k%nums.size();
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
    }
};