/*You are given a 2D integer array ranges and two integers left and right. Each ranges[i] = [starti, endi] represents an inclusive interval between starti and endi.

Return true if each integer in the inclusive range [left, right] is covered by at least one interval in ranges. Return false otherwise.

An integer x is covered by an interval ranges[i] = [starti, endi] if starti <= x <= endi.*/
class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        
        
            int arr[10000]={0};
    int i,j;
    for(i=left;i<=right;i++)
    {
        arr[i]=1;
    }
    bool check=true;
    for(i=0;i<ranges.size();i++)
    {
        for(j=ranges[i][0];j<=ranges[i][1];j++)
        {
          arr[j]++;
        }
    }

    for(i=left;i<=right;i++)
    {
        if(arr[i]<2)
        {
            return false;
        }
    }

    return true;
        
    }
};