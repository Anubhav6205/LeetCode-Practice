/*Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).
 */
class Solution {
public:
    int maxProduct(vector<int>& nums) {
            int max=0;
    int indexi,indexj;
    int i,j;
    for(i=0;i<nums.size()-1;i++)
    {
        for(j=i+1;j<nums.size();j++)
        {
            if((nums[i]-1)*(nums[j]-1)>max)
            {
                max=(nums[i]-1)*(nums[j]-1);
                
            }
        }
    }
    return max;
        
    }
};