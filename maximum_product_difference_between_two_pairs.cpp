/*The product difference between two pairs (a, b) and (c, d) is defined as (a * b) - (c * d).

For example, the product difference between (5, 6) and (2, 7) is (5 * 6) - (2 * 7) = 16.
Given an integer array nums, choose four distinct indices w, x, y, and z such that the product difference between pairs (nums[w], nums[x]) and (nums[y], nums[z]) is maximized.

Return the maximum such product difference.*/

class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int size=nums.size();
    int a=nums[size-1];
    int b=nums[size-2];
    int c=nums[0];
    int d=nums[1];
    int diff=(a*b)-(c*d);
        return diff;
        
    }
};//completed