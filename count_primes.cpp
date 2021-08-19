/*Count the number of prime numbers less than a non-negative number, n.*/
class Solution {
public:
    
int countPrimes(int n)
{
    int i,j;
    int ans =0;
    if(n==0||n==1)
    {
        return 0;
    }
    vector<int>arr(n+1,0);
    for(i=2;i*i<=n;i++)
    {
        for(j=i;j*i<=n;j++)
        {
            arr[i*j]=1;
        }
    }
    for(i=2;i<n;i++)
    {
        if(arr[i]==0)
        {
            ans++;
        }
    }
    return ans;

}
};