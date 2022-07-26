/*You are given a 0-indexed integer array nums of length n.

The average difference of the index i is the absolute difference between the average of the first i + 1 elements of nums and the average of the last n - i - 1 elements. Both averages should be rounded down to the nearest integer.

Return the index with the minimum average difference. If there are multiple such indices, return the smallest one.

Note:

The absolute difference of two numbers is the absolute value of their difference.
The average of n elements is the sum of the n elements divided (integer division) by n.
The average of 0 elements is considered to be 0*/
class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
           int minindex = INT_MAX, minval = INT_MAX;
    long long firstsum = 0, secondsum = 0;
    int firstavg,secondavg;
    for (int j = 0; j < nums.size(); j++)
    {
        secondsum += nums[j];
    }
    for (int i = 0; i < nums.size() ; i++)
    {
        firstsum += nums[i];
        secondsum-=nums[i];

      

         firstavg = firstsum / (i + 1);
        if(nums.size()-i-1!=0)
        {
        secondavg = secondsum / (nums.size() - i - 1);
        }
        else
        {
            secondavg=0;
        }
      
        if (minval > abs(firstavg - secondavg))
        {
            minval = abs(firstavg - secondavg);
            minindex = i;
        }
    }
    cout << minindex << endl;
        return minindex;
        
    }
};