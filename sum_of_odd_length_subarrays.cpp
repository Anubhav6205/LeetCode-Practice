/*Given an array of positive integers arr, calculate the sum of all possible odd-length subarrays.

A subarray is a contiguous subsequence of the array.

Return the sum of all odd-length subarrays of arr.

 */
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
            int i,sum=0,k=1;
    while(k<=arr.size())
    {
        for(i=0;i<arr.size();i++)
        {
           if(arr.begin()+i+k>arr.end())
           {
               break;
           } 
            sum+=accumulate(arr.begin()+i,arr.begin()+i+k,0);
        
        }
      
        k+=2;


    }

    return sum;
    
        
    }
};