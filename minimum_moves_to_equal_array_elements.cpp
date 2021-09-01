/*class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min=nums[0];
        int size = nums.size();
        int sum=0;
        for(int i=0;i<size;i++)
        {
            sum+=nums[i];
        }
        return sum-size*min;
        
    }
};*/

class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min=nums[0];
        int size = nums.size();
        int sum=0;
        for(int i=0;i<size;i++)
        {
            sum+=nums[i];
        }
        return sum-size*min;
        
    }
};
//completed
