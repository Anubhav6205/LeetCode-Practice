/*Given an array of integers nums, calculate the pivot index of this array.

The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

Return the leftmost pivot index. If no such index exists, return -1.

 */

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int sum1,sum2,i=1,index=99999;
    int z=accumulate(nums.begin()+1,nums.end(),0);
    if(z==0)
    {
        return 0;
    }
    while(i<nums.size())
    {
    sum1=accumulate(nums.begin(),nums.begin()+i,0);
    sum2=accumulate(nums.begin()+i+1,nums.end(),0);
         cout<<"Sum1 : "<<sum1<<" Sum2 : "<<sum2<<endl; 
    if(sum1==sum2)
    {
        index=i;
        goto label;
    }
    
    i++;
    }
    label:
    if(index==99999)
    {
        return -1;
    }
    else
    {
        return index;
    }
        
    }
};