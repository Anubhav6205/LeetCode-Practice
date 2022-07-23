/*Given an array of integers arr, return true if and only if it is a valid mountain array.

Recall that arr is a mountain array if and only if:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]*/
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
          if(arr.size()<3)
    {
        return false;
    }
    bool inc=false,dec=false;
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
            return false;
        }
        if(arr[i]<arr[i+1])
        {
            inc=true;
            if(inc&& dec)
            {
                return false;
            }
        }
        if(arr[i]>arr[i+1])
        {
            dec=true;
        }
    }
        if( inc && dec)
        {
        return true;
        }
        return false;
        
    }
};