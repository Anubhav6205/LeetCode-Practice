/*Given a 0-indexed integer array nums of length n and an integer k, return the number of pairs (i, j) where 0 <= i < j < n, such that nums[i] == nums[j] and (i * j) is divisible by k.*/
class Solution {
public:
    int countPairs(vector<int>& nums, int k) {    int i,j;
    int cnt=0;
    for(i=0;i<nums.size()-1;i++){
        for(j=i+1;j<nums.size();j++){
            if(nums[i]==nums[j] && (i*j)%k==0)
            {
                cnt++;
            }
        }
    }
    return cnt;
    
        
    }
};