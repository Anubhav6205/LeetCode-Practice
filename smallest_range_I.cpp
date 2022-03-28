/*You are given an integer array nums and an integer k.

In one operation, you can choose any index i where 0 <= i < nums.length and change nums[i] to nums[i] + x where x is an integer from the range [-k, k]. You can apply this operation at most once for each index i.

The score of nums is the difference between the maximum and minimum elements in nums.

Return the minimum score of nums after applying the mentioned operation at most once for each index in it.*?
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
            int i,min,max;
    sort(nums.begin(),nums.end());
    min=nums[0];
    int size=nums.size();
    max=nums[size-1];
    min+=k;
    max-=k;
    if(min<max)
    {
        cout<<"max:"<<max<<" min:"<<min;
        return max-min;
        cout<<max-min;
    }
    return 0;
    

        
    }
};