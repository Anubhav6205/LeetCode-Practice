/*Given an array arr, replace every element in that array with the greatest element among the elements to its right, and replace the last element with -1.

After doing so, return the array.*/ 
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
         int i,j,mx=INT_MIN;
    for(i=0;i<arr.size()-1;i++)
    {
        for(j=i+1;j<arr.size();j++)
        {
            mx=max(mx,arr[j]);
        }
        arr[i]=mx;
        mx=INT_MIN;
    }
    arr[arr.size()-1]=-1;
    
        return arr;
        
    }
};