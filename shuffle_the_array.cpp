/*Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

Return the array in the form [x1,y1,x2,y2,...,xn,yn].*/
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
      
    vector<int>x;
    int i=0;
    for(i=0;i<nums.size()/2;i++)
    {
        x.push_back(nums[i]);
        x.push_back(nums[nums.size()/2 +i]);

    }
    return x;
        
    }
};