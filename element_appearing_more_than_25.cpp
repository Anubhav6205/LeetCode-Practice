/*Given an integer array sorted in non-decreasing order, there is exactly one integer in the array that occurs more than 25% of the time, return that integer.*/

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int maxcnt[2],cnt=1,i;
        maxcnt[0]=arr[0];
        maxcnt[1]=1;
        
        if(arr.size()==1)
        {
            return arr[0];
        }
        for(i=0;i<arr.size()-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                cnt++;
            }
            else
            {
                cnt=1;
            }
            if(cnt>maxcnt[1])
            {
                maxcnt[0]=arr[i];
                maxcnt[1]=cnt;
            }
        }
        return maxcnt[0];
    }
};