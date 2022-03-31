./*Given an array of distinct integers arr, find all pairs of elements with the minimum absolute difference of any two elements.

Return a list of pairs in ascending order(with respect to pairs), each pair [a, b] follows

a, b are from arr
a < b
b - a equals to the minimum absolute difference of any two elements in arr*/
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
            vector<vector<int>>zz;
    sort(arr.begin(),arr.end());
    int mindiff=INT_MAX;
    int i;
    for(i=0;i<arr.size()-1;i++)
    {
        if(abs(arr[i]-arr[i+1]) <mindiff)
        {
            mindiff=abs(arr[i]-arr[i+1]);
        }
    }

    for(i=0;i<arr.size()-1;i++)
    {
        vector<int>x;
        if(abs(arr[i]-arr[i+1])==mindiff)
        {
            x.push_back(arr[i]);
            x.push_back(arr[i+1]);
           
        }
        if(x.size()!=0)
        {
        zz.push_back(x);
        }
     
    }
        return zz;
        
    }
};