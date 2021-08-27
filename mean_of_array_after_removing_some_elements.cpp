/*Given an integer array arr, return the mean of the remaining integers after removing the smallest 5% and the largest 5% of the elements.

Answers within 10-5 of the actual answer will be considered accepted.*/

class Solution {
public:
    double trimMean(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    vector<int>fin;
    int target = 2;
    
    int res = arr.size();
    int small=0.05*res;
    int i;
    for(i=small;i<res-small;i++)
    {
        fin.push_back(arr[i]);

    }

    double sum= accumulate(fin.begin(), fin.end(), 0);
    int newsize=fin.size();
    double mean=sum/newsize;
    return mean;
        
        
        
    }
};