/*Given a positive integer n, find the pivot integer x such that:

The sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively.
Return the pivot integer x. If no such integer exists, return -1. It is guaranteed that there will be at most one pivot index for the given input.*/
class Solution {
public:
    int pivotInteger(int n) {
            int prefsum=0,suffsum=0;
    for(int i=0;i<=n;i++)
    {
        prefsum+=i;
    }
    for(int i=n;i>=0;i--)
    {
        suffsum+=i;
        if(suffsum==prefsum)
        {
            return i;
        }
        else
        {
            prefsum-=i;
        }
    }
        return -1;
        
    }
};