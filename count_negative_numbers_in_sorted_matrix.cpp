class Solution {
public:
    int countNegatives(vector<vector<int>>& nums) {
        int sum=0;
        int i=0;
        int j=nums[i].size()-1;
        while(i<nums.size() && j>=0)
        {
            if(nums[i][j]>=0)
            {
          
                i++;
                
            }
            else
            {
               
                sum+=nums.size()-i;
                j--;
                
            }
        }
        return sum;
        
    }
};