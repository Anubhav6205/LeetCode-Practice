/*You are given a positive integer array nums.

The element sum is the sum of all the elements in nums.
The digit sum is the sum of all the digits (not necessarily distinct) that appear in nums.
Return the absolute difference between the element sum and digit sum of nums.

Note that the absolute difference between two integers x and y is defined as |x - y|.class Solution {
public:
    int digitsum(int num)
{ 
    int last;
    int n=num;
    int sum=0;
    while(n>0)
    {
        last=n%10;
        sum+=last;
        n=n/10;
    }
    return sum;

}
    int differenceOfSum(vector<int>& nums) {
        int el_sum=0,dig_sum=0;
    for(auto it:nums)
    {
        el_sum+=it;
        dig_sum+=digitsum(it);
    }
    return abs(el_sum-dig_sum);
    }
};