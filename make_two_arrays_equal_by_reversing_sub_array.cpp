/*You are given two integer arrays of equal length target and arr. In one step, you can select any non-empty sub-array of arr and reverse it. You are allowed to make any number of steps.

Return true if you can make arr equal to target or false otherwise.*/
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
          sort(target.begin(),target.end());
    sort(arr.begin(),arr.end());
    if(target==arr)
    {
        return true;
    }
        return false;
        
    }
};