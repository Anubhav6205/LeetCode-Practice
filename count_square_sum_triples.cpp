/*A square triple (a,b,c) is a triple where a, b, and c are integers and a2 + b2 = c2.

Given an integer n, return the number of square triples such that 1 <= a, b, c <= n*/
class Solution {
public:
    int countTriples(int n) {
        
            int cnt=0;
    int i,j;
    float sqrt1,sqrt2,sqrt3,sum;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            sqrt1=i*i;
            sqrt2=j*j;
            sum=sqrt1+sqrt2;
            sqrt3=sqrt(sum);
            
            if(sqrt3<=n && sqrt3==(int)sqrt3)
            {
          

                cnt++;
            }
            

        }
    }


        return cnt;
        
    }
};