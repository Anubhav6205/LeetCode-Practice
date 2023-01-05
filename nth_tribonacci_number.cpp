/*The Tribonacci sequence Tn is defined as follows: 

T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

Given n, return the value of Tn.*/
class Solution {
public:
    int tribonacci(int n) {
          vector<int>v(n+1,0);
    int pos=n;
        if(n==0)
        {
            return 0;
        }
        else if(n<3)
        {
            return 1;
        }
    v[0]=0;
    v[1]=1;
    v[2]=1;
    n-=2;
    int i=3;
    while(n!=0)
    {
        v[i]=v[i-1]+v[i-2]+v[i-3];
        i++;
        n--;
    }
    
    return v[pos];
        
    }
};