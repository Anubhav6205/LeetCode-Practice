/*Given a positive integer num, return the number of positive integers less than or equal to num whose digit sums are even.

The digit sum of a positive integer is the sum of all its digits.

 */
class Solution {
public:
    int countEven(int num) {
          int i,last,sum=0,cnt=0;
    int n;
    for(i=1;i<=num;i++)
    {
        n=i;
        while(n>0)
        {
            last=n%10;
            sum+=last;
            n/=10;
        }
    
        if(sum%2==0)
        {
            cout<<"sum:"<<sum<<" num:"<<i<<endl;
            cnt++;
        }
        sum=0;
    }
  
        return cnt;
        
    }
};