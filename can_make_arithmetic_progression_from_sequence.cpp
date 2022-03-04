/*A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.

Given an array of numbers arr, return true if the array can be rearranged to form an arithmetic progression. Otherwise, return false.*/
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
            if(arr.size()<3)
    {
        return true; 
    }
    sort(arr.begin(), arr.end());
 
    int i;
    int firstdiff=arr[1]-arr[0];
    int seconddiff;
    for(i=0;i<arr.size()-1;i++)
    {
        seconddiff=arr[i+1]-arr[i];
        if(seconddiff!=firstdiff)
        {
            return false;
        }

    }
    return true;
        
    }
};