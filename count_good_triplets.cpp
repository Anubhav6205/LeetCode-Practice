/*Given an array of integers arr, and three integers a, b and c. You need to find the number of good triplets.

A triplet (arr[i], arr[j], arr[k]) is good if the following conditions are true:

0 <= i < j < k < arr.length
|arr[i] - arr[j]| <= a
|arr[j] - arr[k]| <= b
|arr[i] - arr[k]| <= c
Where |x| denotes the absolute value of x.

Return the number of good triplets.

 */
class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
            int i,j,k;
    int cnt=0;
 
    for(i=0;i<arr.size()-2;i++)
    {
     
        for(j=i+1;j<arr.size()-1;j++)
        {
          
            for(k=j+1;k<arr.size();k++)
            {
            
                if(abs(arr[i]-arr[j])<=a && abs(arr[j]-arr[k])<=b && abs(arr[i]-arr[k])<=c)
                {
                    cnt++;
                  
                }


            }
        }
    }
 
        return cnt ;
        
    }
};