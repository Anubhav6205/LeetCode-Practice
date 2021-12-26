/*You have n coins and you want to build a staircase with these coins. The staircase consists of k rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.

Given the integer n, return the number of complete rows of the staircase you will build.

 */
class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1)
        {
            return n;
        }
    int count=0,i=1;
    while(n)
    {
        if(n-i>=0)
        {
            n-=i;
            count+=1;
            i++;
        }
        else
        {
            goto label;
        }

    }
    label:
    cout<<"Count : "<<count;
    return count;
        
    }
};